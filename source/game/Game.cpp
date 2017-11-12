#include "Game.h"
#include <iostream>

Game::Game() : _graphicCore(&this->engineWindow) {
	this->engineWindow.create(sf::VideoMode(800, 600, 32), "Game");
	this->engineWindow.setVisible(false);
}

void Game::run() {
	sf::Clock clock;
	sf::Time time;

	// Window
	//this->inputCore.setWindow(&this->engineWindow);

	while (this->engineWindow.isOpen()) {
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

	while (this->engineWindow.isOpen()) {
		time = clock.restart();
		this->engine_update(time);
	}
}

void Game::engine_update(sf::Time elapsed) {
	this->engineWindow.clear();

	this->engineWindow.display();
}

Game::~Game() {
}
