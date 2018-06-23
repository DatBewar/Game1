/*
* IdManager.cpp
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

#include "IdManager.h"

#include <iostream>
namespace engine {
	IdManager::IdManager() {
		this->_pool = 0;
	}

	id_type& IdManager::getNewId() {
		id_type *_id = new id_type(this->_pool++);
		return *_id;
	}

	void IdManager::freeId(id_type &_id) {
		delete &_id;
	}

	IdManager::~IdManager() {

	}
}