/*
* Squad.cpp
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

#include "Squad.h"

namespace entity {
	Squad::Squad() : Squad(0, 0, 0) {}

	Squad::Squad(int_16 attack, u_int_16 unit, u_int_16 max) : _displacement() {
		this->_attackPower = attack;
		this->_unitNumber = unit;
		this->_unitMaxNumber = max;
	}
}