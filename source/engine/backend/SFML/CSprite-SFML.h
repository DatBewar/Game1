/*
* CSprite-SFML.h
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

#include <memory>

#include <core/component/ICSprite.h>

#include <SFML/Graphics.hpp>

namespace engine {
namespace backend_sfml {

	class CSpriteSFML : public ICSprite<std::shared_ptr<sf::Sprite>> {
	public:
		CSpriteSFML() {
			this->_sprite = nullptr;
		}

		virtual std::shared_ptr<sf::Sprite> getSprite();
		
		virtual void loadSprite(std::string path);
		
		virtual void loadSprite(std::string path, vector_float ratio);

		virtual void update(float_64 dt);

	private:
		std::shared_ptr<sf::Sprite> _sprite;
	};

}
}