/*
* UniqueId.h
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

#include "core/utils/Types.h"
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
