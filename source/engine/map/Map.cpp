#include "Map.h"
using namespace entity;
namespace map {
	void Map::setEntity(u_int_16 x, u_int_16 y, Entity *ent) {
		this->_map[((x == 0) ? y : (y == 0) ? x : x * y)] = ent;
	}
}