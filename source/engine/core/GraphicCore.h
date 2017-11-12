// Core to display sprite and other things
// Author : CROZE Erwan
// Version 1

#ifndef _CGRAPHICCORE_H
#define _CGRAPHICCORE_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

//#include "Player.h"

class GraphicCore {
public:
	GraphicCore(sf::RenderWindow *w);

	//void drawPlayer(CPlayer *p);

	void draw(sf::Sprite *s);

	~GraphicCore();
private:
	sf::RenderWindow *window;
};

#endif
