/*
* main.cpp
* Copyright (C) 2018 Croze Erwan
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

#include <iostream>

#include "game/Game.h"
#include <core/entity/Entity.h>
#include <core/system/CoreFactory.h>

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
