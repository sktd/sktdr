#pragma once
#include <SFML/Graphics.hpp>
namespace engine
{
	class game_engine
	{
	public:
		game_engine(int gs);
		~game_engine(void);
		void start_game();
		void pause_game();
		void go_to_menu();
		void handling_control(sf::RenderWindow &win);
	private:
		int game_state;
	};
}

