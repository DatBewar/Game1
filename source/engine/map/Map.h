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
