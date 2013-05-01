#include "game_engine.h"
#include "game_window.h"
#include "menu.h"

engine::game_engine::game_engine(int gs):
	game_state(gs)
{
	
}


engine::game_engine::~game_engine(void)
{
}

void engine::game_engine::start_game()
{
	engine::game_window gw(800, 600, 32, 3, "SKTD");
}

void engine::game_engine::handling_control(sf::RenderWindow &win)
{
	switch(game_state){
	case 1:
		menu::menu m1(800, 600, 32, 3, "SKTD", 200, 10, 130, 250, "p1.png", "p1.png", "p1.png", "ob.bmp");
	}
	while(win.isOpen())
	{
		sf::Event ev;
		while( win.pollEvent( ev ) )
		{

		}
	}
}
