/*
* Game.h
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

#ifndef _CENGINE_H
#define _CENGINE_H

#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "core/GraphicCore.h"
#include "core/CoreFactory.h"

class Game {
private:
	// Window
	sf::RenderWindow _engineWindow;

	// Core
	engine::GraphicCore _graphicCore;
	engine::CoreFactory _coreFactory;


	// Map

	// Entity

	// Other

public:

	Game();

	/*
	* Routine
	*/
	void run();

	/*
	* Management
	*/
	void engine_run();

	void menu();

	void level(int lvl);

	/*
	* Every frame we update
	*/
	void engine_update(sf::Time elapsed);

	~Game();
};

#endif
