#pragma once
#include <SFML/Graphics.hpp>
#include "window.h"
namespace engine
{
	class game_engine
	{
	public:
		game_engine();
		~game_engine(void);
		void start_game();
		void pause_game();
		void go_to_menu();
		void manage_game();
		window *window;
	private:
		int game_state;
	};
}

