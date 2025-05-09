/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file build_confirmation_gui.cpp Transparent confirmation dialog for building anything on the map. */

#include "stdafx.h"
#include "string_func.h"
#include "strings_func.h"
#include "window_func.h"
#include "tile_type.h"
#include "widget_type.h"
#include "window_gui.h"
#include "gfx_func.h"
#include "tilehighlight_func.h"
#include "viewport_func.h"
#include "zoom_func.h"
#include "settings_type.h"
#include "station_gui.h"
#include "error.h"
#include "build_confirmation_func.h"
#include "widgets/build_confirmation_widget.h"
#include "widgets/misc_widget.h"

#include "table/strings.h"

#include "safeguards.h"

static const NWidgetPart _nested_build_info_widgets[] = {
	NWidget(WWT_PANEL, COLOUR_GREY, WID_TT_BACKGROUND), SetMinimalSize(200, 32), EndContainer(),
};

static WindowDesc _build_info_desc(
	WDP_MANUAL, "", 0, 0, // Coordinates and sizes are not used,
	WC_TOOLTIPS, WC_NONE,
	WindowDefaultFlag::NoFocus,
	_nested_build_info_widgets
);

/** Window for displaying accepted goods for a station. */
struct BuildInfoWindow : public Window
{
	StationCoverageType sct;
	bool station;
	static Money cost;

	static void show()
	{
		bool station = _settings_client.gui.station_show_coverage; // Station info is inaccurate when station coverage area option is disabled
		StationCoverageType sct = SCT_ALL;
		if (FindWindowByClass(WC_BUILD_STATION) != NULL) sct = SCT_ALL;
		else if (FindWindowByClass(WC_BUS_STATION) != NULL) sct = SCT_PASSENGERS_ONLY;
		else if (FindWindowByClass(WC_TRUCK_STATION) != NULL) sct = SCT_NON_PASSENGERS_ONLY;
		else station = false;
		new BuildInfoWindow(station, sct);
	}

	BuildInfoWindow(bool station, StationCoverageType sct) : Window(_build_info_desc)
	{
		this->station = station;
		this->sct = sct;
		this->InitNested();

		this->flags.Reset(WindowFlag::WhiteBorder);
	}

	Point OnInitialPosition(int16_t sm_width, [[maybe_unused]] int16_t sm_height, [[maybe_unused]] int window_number) override
	{
		Point pt;
		pt.y = GetMainViewTop();
		pt.x = _screen.width - sm_width - FindWindowById(WC_MAIN_TOOLBAR, 0)->width;
		return pt;
	}

	void UpdateWidgetSize([[maybe_unused]] int widget, Dimension &size, [[maybe_unused]] const Dimension &padding, [[maybe_unused]] Dimension &fill, [[maybe_unused]] Dimension &resize) override
	{
		size.width  = GetStringBoundingBox(STR_STATION_BUILD_COVERAGE_AREA_TITLE).width * 2.5;
		size.height = GetStringHeight(STR_STATION_BUILD_COVERAGE_AREA_TITLE, size.width) * (this->station ? 3 : 1);

		/* Increase slightly to have some space around the box. */
		size.width  += 2 + WidgetDimensions::scaled.framerect.Horizontal();
		size.height += 6 + WidgetDimensions::scaled.framerect.Vertical();
	}

	void DrawWidget(const Rect &r, [[maybe_unused]] int widget) const override
	{
		/* There is only one widget. */
		DrawFrameRect(r.left, r.top, r.right, r.bottom, COLOUR_GREY, FrameFlags{});
		Rect tr = r.Shrink(WidgetDimensions::scaled.frametext);

		Money cost = BuildInfoWindow::cost;
		if (cost < 0) {
			tr.top = DrawStringMultiLine(tr, GetString(STR_MESSAGE_ESTIMATED_INCOME, -cost));
		} else {
			tr.top = DrawStringMultiLine(tr, GetString(STR_MESSAGE_ESTIMATED_COST, cost));
		}

		if (!this->station) return;

		tr.top = DrawStationCoverageAreaText(tr, sct, _thd.outersize.x / TILE_SIZE / 2, false);
		if (top - r.top <= GetStringHeight(STR_STATION_BUILD_COVERAGE_AREA_TITLE, r.right - r.left) * 1.5) {
			DrawStationCoverageAreaText(tr, sct, _thd.outersize.x / TILE_SIZE / 2, true);
		}
	}
};

Money BuildInfoWindow::cost = 0;

/** GUI for confirming building actions. */
struct BuildConfirmationWindow : Window {

	// TODO: show estimated price
	static bool shown;   ///< Just to speed up window hiding, HideBuildConfirmationWindow() is called very often.
	static bool estimating_cost; ///< Calculate action cost instead of executing action.
	Point selstart;      ///< The selection start on the viewport.
	Point selend;        ///< The selection end on the viewport.

	BuildConfirmationWindow(WindowDesc &desc) : Window(desc)
	{
		// Save tile selection points, they will be reset by subsequent code, and we must keep them
		selstart = _thd.selstart;
		selend = _thd.selend;

		this->InitNested(0);

		Point pt;
		const Window *w = FindWindowById(WC_MAIN_WINDOW, 0);
		NWidgetViewport *nvp = this->GetWidget<NWidgetViewport>(WID_BC_OK);

		pt.x = w->viewport->scrollpos_x + ScaleByZoom(_cursor.pos.x - nvp->current_x / 2, w->viewport->zoom);
		pt.y = w->viewport->scrollpos_y + ScaleByZoom(_cursor.pos.y - nvp->current_y / 4, w->viewport->zoom);

		nvp->InitializeViewport(this, TileIndex{}, w->viewport->zoom);
		nvp->disp_flags | NWidgetDisplayFlag::ShadeDimmed;

		this->viewport->scrollpos_x = pt.x;
		this->viewport->scrollpos_y = pt.y;
		this->viewport->dest_scrollpos_x = this->viewport->scrollpos_x;
		this->viewport->dest_scrollpos_y = this->viewport->scrollpos_y;

		BuildConfirmationWindow::shown = true;
		BuildConfirmationWindow::estimating_cost = true;
		ConfirmationWindowSetEstimatedCost(0); // Clear old value, just in case
		// This is a hack - we invoke the build command with estimating_cost flag, which is equal to _shift_pressed,
		// then we select last build tool, restore viewport selection, and hide all windows, which pop up when command is invoked,
		// and all that just to get cost estimate value.
		ConfirmPlacingObject();
		ToolbarSelectLastTool();
		_thd.selstart = selstart;
		_thd.selend = selend;
		BuildConfirmationWindow::estimating_cost = false;
		MoveAllWindowsOffScreen();
	}

	~BuildConfirmationWindow()
	{
		BuildConfirmationWindow::shown = false;
	}

	void OnClick(Point pt, int widget, int click_count) override
	{
		switch (widget) {
			case WID_BC_OK:
				if (pt.y <= (int)GetWidget<NWidgetViewport>(WID_BC_OK)->current_y / 2) {
					_thd.selstart = selstart;
					_thd.selend = selend;
					ConfirmPlacingObject();
					ToolbarSelectLastTool();
				} else {
					ResetObjectToPlace();
					CloseWindowByClass(WC_BUILD_BRIDGE);
					//ClearErrorMessages();
					Window *w = FindWindowById(WC_ERRMSG, 0);
					if (w != NULL) w->Close();
				}
				break;
		}
		HideBuildConfirmationWindow(); // this == NULL after this call
	}

	void UpdateWidgetSize(int widget, Dimension &size, const Dimension &padding, Dimension &fill, Dimension &resize) override
	{
		switch (widget) {
			case WID_BC_OK:
				size.width = GetMinButtonSize() * 2;
				size.height = GetMinButtonSize() * 3;
				break;
		}
	}

	void OnPaint() override
	{
		this->DrawWidgets();

		DrawButtonFrame(0, 0, this->width - 1, this->height / 2 - 2, STR_BUTTON_OK);
		DrawButtonFrame(0, this->height / 2, this->width - 1, this->height / 2 - 1, STR_BUTTON_CANCEL);
	}

	void DrawButtonFrame(int x, int y, int w, int h, int str)
	{
		DrawFrameRect(x, y, x + w, y + h, COLOUR_GREY, FrameFlag::BorderOnly);
		Dimension d = GetStringBoundingBox(str);
		DrawFrameRect(x + w / 2 - d.width / 2 - 1,
						y + h / 2 - d.height / 2 - 2,
						x + w / 2 + d.width / 2 + 1,
						y + h / 2 - d.height / 2 + d.height,
						COLOUR_GREY, FrameFlags{});
		DrawString(x, x + w, y + h / 2 - d.height / 2 - 2, str, TC_FROMSTRING, SA_HOR_CENTER);
	}
};

bool BuildConfirmationWindow::shown = false;
bool BuildConfirmationWindow::estimating_cost = false;

static const NWidgetPart _nested_build_confirmation_widgets[] = {
	NWidget(WWT_PANEL, COLOUR_GREY, WID_BC_PANEL),
		NWidget(NWID_VIEWPORT, INVALID_COLOUR, WID_BC_OK), SetSizingType(NWST_VIEWPORT), SetResize(1, 1), SetFill(1, 1), //SetPadding(2, 2, 2, 2),
	EndContainer(),
};

static WindowDesc _build_confirmation_desc(
	WDP_MANUAL, "build_confirmation", 0, 0,
	WC_BUILD_CONFIRMATION, WC_NONE,
	WindowDefaultFlags{},
	_nested_build_confirmation_widgets
);

/**
 * Show build confirmation window under the mouse cursor
*/
void ShowBuildConfirmationWindow()
{
	if (ConfirmationWindowEstimatingCost()) return; // Special case, ignore recursive call

	HideBuildConfirmationWindow();

	if (!_settings_client.gui.build_confirmation || _shift_pressed) {
		ConfirmPlacingObject();
		return;
	}

	BuildConfirmationWindow *w = new BuildConfirmationWindow(_build_confirmation_desc);

	int old_left = w->left;
	int old_top = w->top;
	w->left = _cursor.pos.x - w->width / 2;
	w->top = _cursor.pos.y - w->height / 4;
	w->viewport->left += w->left - old_left;
	w->viewport->top += w->top - old_top;
	w->SetDirty();
	MarkWholeScreenDirty(); // I don't know what does this do, but it looks important

	BuildInfoWindow::show();
}

/**
 * Destroy build confirmation window, this does not cancel current action
*/
void HideBuildConfirmationWindow()
{
	if (ConfirmationWindowEstimatingCost()) return; // Special case, ignore recursive call

	if (!BuildConfirmationWindow::shown) return;

	CloseWindowById(WC_BUILD_CONFIRMATION, 0);
	CloseWindowById(WC_TOOLTIPS, 0);
}

bool ConfirmationWindowShown()
{
	return BuildConfirmationWindow::shown;
}

bool BuildConfirmationWindowProcessViewportClick()
{
	if (!BuildConfirmationWindow::shown) return false;
	Window *w = FindWindowById(WC_BUILD_CONFIRMATION, 0);
	if (w != NULL && IsInsideBS(_cursor.pos.x, w->left, w->width) && IsInsideBS(_cursor.pos.y, w->top, w->height)) {
		if (_settings_client.gui.windows_titlebars || !_left_button_down) {
			Point pt;
			pt.x = _cursor.pos.x - w->left;
			pt.y = _cursor.pos.y - w->top;
			w->OnClick(pt, WID_BC_OK, 1);
		}
		return true;
	}

	HideBuildConfirmationWindow();

	_thd.new_outersize = _thd.outersize; // Revert station catchment area highlight, which is getting set to zero inside drawing funcs

	return false;
}

bool ConfirmationWindowEstimatingCost()
{
	return BuildConfirmationWindow::estimating_cost;
}

void ConfirmationWindowSetEstimatedCost(Money cost)
{
	BuildInfoWindow::cost = cost;
}
