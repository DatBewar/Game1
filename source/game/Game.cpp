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
