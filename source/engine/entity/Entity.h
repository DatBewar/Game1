/*
* Entity.h
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

#ifndef _U_ENTITY_H
#define _U_ENTITY_H

#include <string>
#include <unordered_map>

#include "core/UniqueId.h"
#include "core/IdManager.h"
#include "core/component/Component.h"

namespace entity {
	class Entity : public engine::UniqueId<engine::id_type> {
	protected:
		/**
		* Components
		*/
		std::unordered_map<std::string, engine::Component*> components;

	public:
		Entity(engine::id_type &ent_id);
		virtual ~Entity();

		void setComponent(const std::string &_key, engine::Component &_comp) {
			this->components.insert({ _key, &_comp });
		}

		void removeComponent(const std::string _key) {
			this->components.erase(_key);
		}

		engine::Component& getComponent(std::string  &_key) {
			return *(this->components[_key]);
		}

		void update() {
			for (const auto &it : this->components) {
				it.second->update();
			}
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
#endif //_U_ENTITY_H
