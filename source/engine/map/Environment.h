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