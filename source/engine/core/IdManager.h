/*
* IdManager.h
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

#ifndef _U_IDMANAGER_H
#define _U_IDMANAGER_H

#include "core/Types.h"
#include "core/UniqueId.h"

namespace engine {
	typedef u_int_64 id_type;

	class IdManager {
	private:
		std::atomic<id_type> _pool;
	public:
		IdManager();
		~IdManager();

		id_type& getNewId();

		void freeId(id_type &_entityId);

	};

}

#endif //_U_IDMANAGER_H
