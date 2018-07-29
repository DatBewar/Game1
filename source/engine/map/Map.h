/*
* Map.h
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

#pragma once

#include "core/utils/Types.h"
#include "core/utils/UniqueId.h"
#include "core/entity/Entity.h"

namespace map {
	class Map : engine::UniqueId<engine::id_type> {
	private:
		u_int_16 _sizeX;
		u_int_16 _sizeY;
		u_int_16 _gameSizeX;
		u_int_16 _gameSizeY;

		engine::Entity **_map;

		void init(engine::id_type &id, u_int_16 x, u_int_16 y, u_int_16 gameX, u_int_16 gameY);

	public:
		Map(engine::id_type &id, u_int_16 x, u_int_16 y);
		Map(engine::id_type &id, u_int_16 x, u_int_16 y, u_int_16 gameX, u_int_16 gameY);

		u_int_16 getXSize() {
			return this->_sizeX;
		}

		u_int_16 getYSize() {
			return this->_sizeY;
		}

		void setEntity(u_int_16 x, u_int_16 y, engine::Entity *ent);


		~Map() {};
	};
}
