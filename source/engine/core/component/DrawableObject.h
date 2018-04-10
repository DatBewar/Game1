/*
* DrawableObject.h
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

#ifndef _CDRAWABLEOBJECT_H
#define _CDRAWABLEOBJECT_H

#include "core/Types.h"
#include <SFML/Graphics.hpp>
#include <string>

namespace core {
	class DrawableObject {
	private:
		sf::Sprite _sprite;
	public:
		DrawableObject();
		virtual ~DrawableObject();

		sf::Sprite getCurrentSprite();

		void loadSprite(std::string);
		void loadSprite(std::string, vector_float);
	};
}

#endif //_CDRAWABLEOBJECT_H