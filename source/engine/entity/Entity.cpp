#include "entity/Entity.h"

#include <iostream>

using namespace engine;

namespace entity {
	Entity::Entity(id_type &ent_id) : UniqueId(ent_id) {
	}

	Entity::~Entity() {

	}
}