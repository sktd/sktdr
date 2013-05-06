#pragma once
#include <SFML/Graphics.hpp>
#include "towers.h"
namespace engine
{
	class player_console
	{
	public:
		player_console();
		~player_console(void);
		void subtract_life();
		void add_resources(int how_much);
		void display(sf::RenderWindow &win);
	private:
		int lifes;
		int resources;
		map::towers tower1;
		map::towers tower2;
		map::towers tower3;
		sf::Text txt1;
		sf::Text txt2;
		sf::Text txt3;
		sf::Text l;
		sf::Font f;
	};
}
