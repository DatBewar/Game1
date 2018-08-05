/*
* CoreFactory.h
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

#pragma once

#include <unordered_map>

#include <core/utils/IdManager.h>
#include <core/entity/Entity.h>
#include <core/utils/UniqueId.h>

namespace engine {
	class CoreFactory {
	private:
		static CoreFactory m_instance;

		IdManager *_factoryIdManagerEntity;

		std::unordered_map<id_type, Entity*> _entities;

		CoreFactory& operator= (const CoreFactory&) = default;
		CoreFactory(const CoreFactory&) = default;
	public:
		static CoreFactory& instance();
		CoreFactory();

		// New
		IdManager& getIdManagerEntity();

		Entity& getNewEntity();
		Entity& getEntity(id_type id);

		// Delete
		void deleteEntity(id_type &id);

		~CoreFactory();

	};
}

