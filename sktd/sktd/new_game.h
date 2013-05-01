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
		void push();
		/*void draw(sf::RenderWindow win);*/
	};
}
