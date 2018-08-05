/*
* Entity.h
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

#include <string>
#include <unordered_map>

#include "core/utils/UniqueId.h"
#include "core/utils/IdManager.h"
#include "core/component/IComponent.h"

namespace engine {
	class Entity : public engine::UniqueId<engine::id_type> {
	protected:
		/**
		* Components
		*/
		std::unordered_map<std::string, engine::IComponent*> components;

	public:
		Entity(engine::id_type &ent_id);
		virtual ~Entity();

		void setComponent(const std::string &_key, engine::IComponent &_comp) {
			this->components.insert({ _key, &_comp });
		}

		void removeComponent(const std::string _key) {
			this->components.erase(_key);
		}

		engine::IComponent& getComponent(std::string  &_key) {
			return *(this->components[_key]);
		}

		boolean hasComponent(std::string &_key) {
			//TODO rework
			return (this->components.find(_key) != this->components.end());
		}

		/**
		* Compare the entity id and not all the components
		*/
		/*boolean operator==(const UniqueId &_ent) const{
		  return (this->getId()) == _ent.getId();
		}*/


	private:
		Entity(const Entity &_copy) = delete;
	};
}
