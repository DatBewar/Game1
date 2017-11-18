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