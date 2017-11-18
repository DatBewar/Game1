#ifndef _U_OBJECTID_H
#define _U_OBJECTID_H

#include "core/Types.h"
#include <iostream>

namespace engine {
	template<typename T>
	class UniqueId {
	private:
		T *_id;

	public:
		UniqueId(T &_id) {
			this->_id = &_id;
		}
		~UniqueId() {
		}

		T& getId() {
			return *_id;
		}

		UniqueId<T>& getEntityId() {
			return this->_id;
		}

		boolean operator==(const UniqueId &_objId) {
			return this->_id == _objId.getId();
		}

		UniqueId(const UniqueId &_copy) = delete;
	};
}

#endif //_U_OBJECTID_H
