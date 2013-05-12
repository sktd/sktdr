#pragma once
#include "buttons.h"
#include <SFML/Graphics.hpp>
namespace menu
{
	class continue_game :
		public buttons
	{
	public:
		continue_game(double px, double py, std::string s);
		~continue_game(void);
		void push(sf::RenderWindow &win, int &game_state);
		/*void draw(sf::RenderWindow win);*/
	};
}
