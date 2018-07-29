/*
* GraphicCoreSFML.cpp
* Copyright (C) 2017 Croze Erwan
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

#include <backend/SFML/GraphicCore-SFML.h>
#include <core/system/IGraphicCore.h>

namespace engine {
namespace backend_sfml {

	GraphicCoreSFML::GraphicCoreSFML() {
		this->_window.create(sf::VideoMode(800, 600, 32), "Game");
		this->_window.setVisible(false);
	}

	GraphicCoreSFML::~GraphicCoreSFML() {
		this->_window.close();
	}

	void GraphicCoreSFML::draw(sf::Sprite *s) {
		this->_window.draw(*s);
	}
}
}