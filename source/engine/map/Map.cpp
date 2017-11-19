/*
* Map.cpp
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

#include "Map.h"

using namespace entity;
using namespace engine;

namespace map {
	Map::Map(id_type &id, u_int_16 x, u_int_16 y) : UniqueId(id) {
		this->_sizeX = x;
		this->_sizeY = y;
	}

	void Map::setEntity(u_int_16 x, u_int_16 y, Entity *ent) {
		this->_map[((x == 0) ? y : (y == 0) ? x : x * y)] = ent;
	}
}