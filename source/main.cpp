#include <iostream>
#include "game/Game.h"
#include "entity/Entity.h"
#include "core/CoreFactory.h"

using namespace std;
using namespace engine;

void test() {
	CoreFactory factory;

	/*IdManager &idmanager = factory.getIdManager();

	Entity entity1(idmanager.getNewId());
	cerr << "entity1 " << &entity1.getEntityId() << endl;
	Entity entity2(idmanager.getNewId());
	cerr << "entity2 " << &entity2.getEntityId() << endl;

	if (entity1 == entity2) {
		cerr << "error of generation of id" << endl;
	}
	idmanager.freeId(entity1.getEntityId());
	idmanager.freeId(entity2.getEntityId());*/
}

int main()
{
	Game game;
	game.run();

	return 0;
}
