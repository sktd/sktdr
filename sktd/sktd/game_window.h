#pragma once
#include "window.h"
#include "player_console.h"
#include "map.h"
#include <SFML/Graphics.hpp>
namespace engine
{
	class game_window :
		public engine::window
	{
	public:
		game_window(int w, int h, int cd, int style, std::string t);
		~game_window(void);
		void display();
		map::map map1;
		player_console console;
		void handling_control();
	};
}

