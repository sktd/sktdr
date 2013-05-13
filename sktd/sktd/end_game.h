#pragma once
#include "buttons.h"
#include <SFML/Graphics.hpp>
namespace menu
{
	class end_game :
		public buttons
	{
	public:
		end_game(double px, double py, std::string s);
		~end_game(void);
		void push(sf::RenderWindow &win, int &game_state);
		/*void draw(sf::RenderWindow win);*/
	};
}
