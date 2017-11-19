/*
* Game.cpp
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

#include "Game.h"
#include <iostream>

Game::Game() : _graphicCore(&this->_engineWindow){
	this->_engineWindow.create(sf::VideoMode(800, 600, 32), "Game");
	this->_engineWindow.setVisible(false);
}

void Game::run() {
	sf::Clock clock;
	sf::Time time;

	// Window
	//this->inputCore.setWindow(&this->engineWindow);

	while (this->_engineWindow.isOpen()) {
		time = clock.restart();
		this->engine_update(time);
	}
}

void Game::menu() {

}

void Game::level(int lvl) {

}

void Game::engine_run() {
	sf::Clock clock;
	sf::Time time;

	while (this->_engineWindow.isOpen()) {
		time = clock.restart();
		this->engine_update(time);
	}
}

void Game::engine_update(sf::Time elapsed) {
	//INPUT
	//SIMULATE
	this->_engineWindow.clear();
	this->_engineWindow.display();
}

Game::~Game() {
}
