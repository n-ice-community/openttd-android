/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file sdl_v.h Base of the SDL video driver. */

#ifndef VIDEO_SDL_H
#define VIDEO_SDL_H

#include "video_driver.hpp"

/** The SDL video driver. */
class VideoDriver_SDL : public VideoDriver {
public:
	std::optional<std::string_view> Start(const StringList &parm) override;

	void Stop() override;

	void MakeDirty(int left, int top, int width, int height) override;

	void MainLoop() override;

	bool ChangeResolution(int w, int h) override;

	bool ToggleFullscreen(bool fullscreen) override;

	bool AfterBlitterChange() override;

	bool ClaimMousePointer() override;

	std::string_view GetName() const override { return "sdl"; }

#ifdef __ANDROID__
	float GetDPIScale() override;
	Dimension GetScreenSize() const override;
#endif

protected:
	void InputLoop() override;
	void Paint() override;
	void CheckPaletteAnim() override;
	bool PollEvent() override;

private:
	bool CreateMainSurface(uint w, uint h);
	void SetupKeyboard();
};

/** Factory for the SDL video driver. */
class FVideoDriver_SDL : public DriverFactoryBase {
public:
	FVideoDriver_SDL() : DriverFactoryBase(Driver::DT_VIDEO, 5, "sdl", "SDL Video Driver") {}
	std::unique_ptr<Driver> CreateInstance() const override { return std::make_unique<VideoDriver_SDL>(); }
};

#endif /* VIDEO_SDL_H */
