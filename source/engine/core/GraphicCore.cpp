#include "GraphicCore.h"

namespace engine {
	GraphicCore::GraphicCore(sf::RenderWindow *w) {
		this->window = w;
	}


	GraphicCore::~GraphicCore() {
	}


	/*void GraphicCore::drawPlayer(CPlayer *p) {
		if (p->getSprite() != nullptr)
			this->window->draw(*p->getSprite());
	}*/

	void GraphicCore::draw(sf::Sprite *s) {
		this->window->draw(*s);
	}
}