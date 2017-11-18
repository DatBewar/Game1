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