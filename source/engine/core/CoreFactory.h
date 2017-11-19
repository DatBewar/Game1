/*
* CoreFactory.h
* Copyright (C) 2017 Croze Erwan
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
