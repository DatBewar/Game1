/*
* Map.h
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

#ifndef _U_MAP_H
#define _U_MAP_H

#include "core/Types.h"
#include "core/UniqueId.h"
#include "entity/Entity.h"

namespace map {
	class Map : engine::UniqueId<engine::id_type> {
	private:
		u_int_16 _sizeX;
		u_int_16 _sizeY;

		entity::Entity **_map;

	public:
		Map(engine::id_type &id, u_int_16 x, u_int_16 y);

		u_int_16 getXSize() {
			return this->_sizeX;
		}

		u_int_16 getYSize() {
			return this->_sizeY;
		}

		void setEntity(u_int_16 x, u_int_16 y, entity::Entity *ent);


		~Map() {};
	};
}
#endif //_U_MAP_H
