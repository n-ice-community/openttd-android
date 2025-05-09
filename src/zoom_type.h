/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file zoom_type.h Types related to zooming in and out. */

#ifndef ZOOM_TYPE_H
#define ZOOM_TYPE_H

#include "core/enum_type.hpp"

/** All zoom levels we know. */
enum ZoomLevel : uint8_t {
	/* Our possible zoom-levels */
	ZOOM_LVL_BEGIN  = 0, ///< Begin for iteration.
	ZOOM_LVL_IN_4X  = 0, ///< Zoomed 4 times in.
	ZOOM_LVL_IN_2X,      ///< Zoomed 2 times in.
	ZOOM_LVL_NORMAL,     ///< The normal zoom level.
	ZOOM_LVL_OUT_2X,     ///< Zoomed 2 times out.
	ZOOM_LVL_OUT_4X,     ///< Zoomed 4 times out.
	ZOOM_LVL_OUT_8X,     ///< Zoomed 8 times out.
	ZOOM_LVL_END,        ///< End for iteration.

	/* Here we define in which zoom viewports are */
	ZOOM_LVL_VIEWPORT = ZOOM_LVL_NORMAL, ///< Default zoom level for viewports.
	ZOOM_LVL_NEWS     = ZOOM_LVL_NORMAL, ///< Default zoom level for the news messages.
	ZOOM_LVL_INDUSTRY = ZOOM_LVL_OUT_2X, ///< Default zoom level for the industry view.
	ZOOM_LVL_TOWN     = ZOOM_LVL_NORMAL, ///< Default zoom level for the town view.
	ZOOM_LVL_AIRCRAFT = ZOOM_LVL_NORMAL, ///< Default zoom level for the aircraft view.
	ZOOM_LVL_SHIP     = ZOOM_LVL_NORMAL, ///< Default zoom level for the ship view.
	ZOOM_LVL_TRAIN    = ZOOM_LVL_NORMAL, ///< Default zoom level for the train view.
	ZOOM_LVL_ROADVEH  = ZOOM_LVL_NORMAL, ///< Default zoom level for the road vehicle view.
	ZOOM_LVL_WORLD_SCREENSHOT = ZOOM_LVL_NORMAL, ///< Default zoom level for the world screen shot.

	ZOOM_LVL_DETAIL = ZOOM_LVL_OUT_2X, ///< All zoom levels below or equal to this will result in details on the screen, like road-work, ...
	ZOOM_LVL_TEXT_EFFECT = ZOOM_LVL_OUT_2X, ///< All zoom levels above this will not show text effects.

	ZOOM_LVL_MIN      = ZOOM_LVL_IN_4X, ///< Minimum zoom level.
	ZOOM_LVL_MAX      = ZOOM_LVL_OUT_8X, ///< Maximum zoom level.
};
DECLARE_INCREMENT_DECREMENT_OPERATORS(ZoomLevel)
DECLARE_ENUM_AS_ADDABLE(ZoomLevel)

static uint const ZOOM_BASE_SHIFT = static_cast<uint>(ZOOM_LVL_NORMAL);
static uint const ZOOM_BASE = 1U << ZOOM_BASE_SHIFT;

extern int _gui_scale;
extern int _gui_scale_cfg;
extern int _button_ratio;
extern int _button_ratio_cfg;

extern ZoomLevel _gui_zoom;
extern ZoomLevel _font_zoom;
#define ZOOM_LVL_GUI (_gui_zoom)

static const int MIN_INTERFACE_SCALE = 100;
static const int MAX_INTERFACE_SCALE = 500;

#endif /* ZOOM_TYPE_H */
