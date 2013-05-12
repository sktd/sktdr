#pragma once
#include "buttons.h"
#include <SFML/Graphics.hpp>
namespace menu
{
	class new_game :
		public buttons
	{
	public:
		new_game(double px, double py, std::string s);
		~new_game(void);
		void push(sf::RenderWindow &win, int &game_state);
		/*void draw(sf::RenderWindow win);*/
	};
}
