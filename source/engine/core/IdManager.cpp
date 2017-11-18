#include "IdManager.h"

#include <iostream>
namespace engine {
	IdManager::IdManager() {
		this->_pool = 0;
	}

	id_type& IdManager::getNewId() {
		id_type *_id = new id_type(this->_pool++);
		return *_id;
	}

	void IdManager::freeId(id_type &_id) {
		delete &_id;
	}

	IdManager::~IdManager() {

	}
}