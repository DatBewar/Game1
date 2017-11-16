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
		this->factoryIdManagerEntity = new IdManager();
		this->factoryIdManagerMap = new IdManager();
	}

	IdManager& CoreFactory::getIdManagerEntity() {
		return *(this->factoryIdManagerEntity);
	}

	IdManager& CoreFactory::getIdManagerMap() {
		return *(this->factoryIdManagerMap);
	}

	Entity& CoreFactory::getNewEntity() {
		Entity * newEntity = new Entity(
			this->factoryIdManagerEntity->getNewId()
		);
		this->entities.insert(std::make_pair(newEntity->getId(), newEntity));
		return *newEntity;
	}

	Entity& CoreFactory::getEntity(id_type id) {
		auto it = this->entities.find(id);
		return ((it == this->entities.end()) ? *it->second : getNewEntity());
	}

	void CoreFactory::deleteEntity(id_type &id) {
		this->factoryIdManagerEntity->freeId(entities.at(id)->getId());
		delete(entities[id]);
	}

	void CoreFactory::deleteMap(id_type &id) {
		//this->factoryIdManagerMap->freeId(maps[id]->getEntityId());
		//delete(maps[id]);
	}

	CoreFactory::~CoreFactory() {
		delete this->factoryIdManagerEntity;
	}
}