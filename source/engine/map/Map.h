#ifndef _U_MAP_H
#define _U_MAP_H

#include "core/Types.h"
#include "core/UniqueId.h"
#include "entity/Entity.h"

namespace map {
	class Map : engine::UniqueId<engine::id_type> {
	private:
		u_int_16 sizeX;
		u_int_16 sizeY;

		entity::Entity **_map;

	public:
		Map(engine::id_type &id, u_int_16 x, u_int_16 y) : UniqueId(id) {
			sizeX = x;
			sizeY = y;
		}

		u_int_16 getXSize() {
			return sizeX;
		}

		u_int_16 getYSize() {
			return sizeY;
		}

		void setEntity(u_int_16 x, u_int_16 y, entity::Entity *ent);


		~Map();
	};
}
#endif //_U_MAP_H
