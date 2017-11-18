#include "CoreFactory.h"

#include <unordered_map>

using namespace entity;
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