#include "Squad.h"

namespace entity {
	Squad::Squad() : Squad(0, 0, 0) {}

	Squad::Squad(int_16 attack, u_int_16 unit, u_int_16 max) : _displacement() {
		this->_attackPower = attack;
		this->_unitNumber = unit;
		this->_unitMaxNumber = max;
	}
}