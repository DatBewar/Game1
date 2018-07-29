/*
* CoreFactory.cpp
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

#include "CoreFactory.h"

#include <unordered_map>

using namespace map;

namespace engine {
	CoreFactory CoreFactory::m_instance = CoreFactory();

	CoreFactory& CoreFactory::instance() {
		return CoreFactory::m_instance;
	}

	CoreFactory::CoreFactory() {
		this->_factoryIdManagerEntity = new IdManager();
		this->_factoryIdManagerMap = new IdManager();
	}

	IdManager& CoreFactory::getIdManagerEntity() {
		return *(this->_factoryIdManagerEntity);
	}

	IdManager& CoreFactory::getIdManagerMap() {
		return *(this->_factoryIdManagerMap);
	}

	Entity& CoreFactory::getNewEntity() {
		Entity * newEntity = new Entity(
			this->_factoryIdManagerEntity->getNewId()
		);
		this->_entities.insert(std::make_pair(newEntity->getId(), newEntity));
		return *newEntity;
	}

	Entity& CoreFactory::getEntity(id_type id) {
		auto it = this->_entities.find(id);
		return ((it == this->_entities.end()) ? *it->second : getNewEntity());
	}

	void CoreFactory::deleteEntity(id_type &id) {
		this->_factoryIdManagerEntity->freeId(_entities.at(id)->getId());
		delete(_entities[id]);
	}

	void CoreFactory::deleteMap(id_type &id) {
		//this->_factoryIdManagerMap->freeId(_maps[id]->getEntityId());
		//delete(_maps[id]);
	}

	CoreFactory::~CoreFactory() {
		delete this->_factoryIdManagerEntity;
	}
}