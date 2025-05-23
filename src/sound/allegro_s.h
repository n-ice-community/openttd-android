/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file allegro_s.h Base for playing sound via Allegro. */

#ifndef SOUND_ALLEGRO_H
#define SOUND_ALLEGRO_H

#include "sound_driver.hpp"

/** Implementation of the allegro sound driver. */
class SoundDriver_Allegro : public SoundDriver {
public:
	std::optional<std::string_view> Start(const StringList &param) override;

	void Stop() override;

	void MainLoop() override;
	std::string_view GetName() const override { return "allegro"; }
};

/** Factory for the allegro sound driver. */
class FSoundDriver_Allegro : public DriverFactoryBase {
public:
	FSoundDriver_Allegro() : DriverFactoryBase(Driver::DT_SOUND, 4, "allegro", "Allegro Sound Driver (param hz,samples)") {}
	std::unique_ptr<Driver> CreateInstance() const override { return std::make_unique<SoundDriver_Allegro>(); }
};

#endif /* SOUND_ALLEGRO_H */
