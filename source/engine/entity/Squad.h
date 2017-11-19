/*
* Squad.h
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

#ifndef _U_SQUAD_H
#define _U_SQUAD_H

#include "core/Types.h"
#include "core/Displacement.h"

namespace entity{
	class Squad {
	public:
		Squad();
		Squad(int_16, u_int_16, u_int_16);

		int_16 getAttackPower() {
			return this->_attackPower;
		};

		u_int_16 getUnitAliveNumber() {
			return this->_unitNumber;
		};

		u_int_16 getUnitMaxNumber() {
			return this->_unitMaxNumber;
		};

		core::Displacement getSquadDisplacement() {
			return this->_displacement;
		}

	private:
		core::Displacement _displacement;
		int_16 _attackPower;
		u_int_16 _unitNumber;
		u_int_16 _unitMaxNumber;

	};
}

#endif //_U_SQUAD_H