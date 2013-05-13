#include "game_engine.h"
#include "game_window.h"
#include "menu.h"

engine::game_engine::game_engine()
{
	game_state=1;
}


engine::game_engine::~game_engine(void)
{
}

void engine::game_engine::start_game()
{
	engine::game_window gw(800, 600, 32, 3, "SKTD");
}

void engine::game_engine::manage_game()
{
	while(game_state!=0)
	{
		switch(game_state){
		case 2:
			window=new game_window(800, 600, 32, 1, "SKTD");
			break;
		case 1:
			window=new menu::menu(800, 600, 32, 3, "SKTD", 200, 150, 270, 390, "p1.png", "p1.png", "p2.png");
			break;
		}
		while((*window).isOpen()){
			window->handling_control(game_state);
		}
		delete window;
	}
}
