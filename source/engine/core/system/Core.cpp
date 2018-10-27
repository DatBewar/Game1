/*
* Core.cpp
* Copyright (C) 2018 Croze Erwan
*
* This program is free software : you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.If not, see <http://www.gnu.org/licenses/>.
*/

#include <core/system/Core.h>

namespace engine {
	Core& Core::instance() {
		return Core::m_instance;
	}

	Core::Core() {
		Core::m_instance = this;
		this->_graphicBackend = graphic_backend::BACKEND_SFML;
	}

	Core::Core(graphic_backend gb) {
		Core::m_instance = this;
		this->_graphicBackend = gb;
	}

	void Core::update() {
		if (this->_coreTime.getStatus() == timer_status::STOPPED) this->_coreTime.start();
	}
}