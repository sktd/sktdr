#pragma once
#include "immovable.h"
#include <SFML\Graphics.hpp>
namespace menu
{
	class button :
		public ent::immovable
	{
	public:
		button(double px, double py, std::string s);
		~button(void);
		void virtual push(sf::RenderWindow &win, int &game_state)=0;
		void draw(sf::RenderWindow &win);
		void draw2(sf::RenderWindow &win);
	};
}
