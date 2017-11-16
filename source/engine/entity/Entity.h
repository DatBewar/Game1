#ifndef _U_ENTITY_H
#define _U_ENTITY_H

#include <string>
#include <unordered_map>

#include "core/UniqueId.h"
#include "core/IdManager.h"
#include "core/Component.h"

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
