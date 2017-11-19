/*
* Environment.h
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

#ifndef _U_ENVIRONMENT_H
#define _U_ENVIRONMENT_H

#include "core/Types.h"

namespace map {
	enum EnvType {
		plain,
		forest,
		building
	};

	class Environment {
	private:
		EnvType _type;
		int_16 _attackModifier;
		int_16 _defenseModifier;

	public:
		Environment();
		Environment(EnvType t);
		Environment(int_16 attack, int_16 defense);
		Environment(EnvType t, int_16 attack, int_16 defense);

		EnvType getEnvType() {
			return this->_type;
		}

		int_16 getAttackModifier() {
			return this->_attackModifier;
		}

		int_16 getDefenseModifier() {
			return this->_defenseModifier;
		}
	};
}

#endif //_U_ENVIRONMENT_H