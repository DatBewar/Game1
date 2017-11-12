// Author : CROZE Erwan
// Version 1

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
	sf::RenderWindow engineWindow;

	// Core
	GraphicCore _graphicCore;
	CoreFactory _coreFactory;

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
