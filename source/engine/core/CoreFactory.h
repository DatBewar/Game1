#ifndef _U_COREFACTORY_H
#define _U_COREFACTORY_H

#include <unordered_map>

#include "core/IdManager.h"
#include "entity/Entity.h"
#include "core/UniqueId.h"
#include "map/Map.h"

namespace engine {
	class CoreFactory {
	private:
		static CoreFactory m_instance;

		IdManager *_factoryIdManagerEntity;
		IdManager *_factoryIdManagerMap;

		std::unordered_map<id_type, entity::Entity*> _entities;
		std::unordered_map<id_type, map::Map*> _maps;

		CoreFactory& operator= (const CoreFactory&) {}
		CoreFactory(const CoreFactory&) {};
	public:
		static CoreFactory& instance();
		CoreFactory();

		// New
		IdManager& getIdManagerEntity();
		IdManager& getIdManagerMap();

		entity::Entity& getNewEntity();

		entity::Entity& getEntity(id_type id);

		map::Map& getNewMap();

		map::Map& getMap(id_type id);

		// Delete
		void deleteEntity(id_type &id);
		void deleteMap(id_type &id);

		virtual ~CoreFactory();

	};
}

#endif //_U_COREFACTORY_H
