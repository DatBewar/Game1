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