#pragma once
#include <SFML/Graphics.hpp>
namespace engine
{
	class player_console
	{
	public:
		player_console(void);
		~player_console(void);
		void subtract_life();
		void add_resources(int how_much);
		void display(sf::RenderWindow &win);
	private:
		int lifes;
		int resources;
	};
}
