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
