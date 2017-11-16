#ifndef _U_OBJECTID_H
#define _U_OBJECTID_H

#include "core/Types.h"
#include <iostream>

namespace engine {
	template<typename T>
	class UniqueId {
	private:
		T *id;

	public:
		UniqueId(T &_id) {
			this->id = &_id;
		}
		~UniqueId() {
		}

		T& getId() {
			return *id;
		}

		UniqueId<T>& getEntityId() {
			return this->id;
		}

		boolean operator==(const UniqueId &_objId) {
			return this->id == _objId.getId();
		}

		UniqueId(const UniqueId &_copy) = delete;
	};
}

#endif //_U_OBJECTID_H
