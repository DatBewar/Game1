/*
* Environment.cpp
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

#include "Environment.h"

namespace map{
	Environment::Environment() {
		Environment(plain, 0, 0);
	}

	Environment::Environment(EnvType t) {
		Environment(t, 0, 0);
	}

	Environment::Environment(int_16 attack, int_16 defense) {
		Environment(plain, attack, defense);
	}

	Environment::Environment(EnvType t, int_16 attack, int_16 defense) {
		this->_type = t;
		this->_attackModifier = attack;
		this->_defenseModifier = defense;
	}
}