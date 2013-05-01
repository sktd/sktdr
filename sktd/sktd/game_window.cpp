#include "game_window.h"


engine::game_window::game_window(int w, int h, int cd, int style, std::string t):
	window(w, h, cd, style, t)
{
}


engine::game_window::~game_window(void)
{
}

void engine::game_window::display()
{
	win.clear(sf::Color::Black);
	map1.display(win);
	console.display(win);
	win.display();
}

void engine::game_window::handling_control()
{
	while(win.isOpen()){
		sf::Event ev;
		while( win.pollEvent( ev ) )
		{
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Escape )
				win.close();
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Return )
				map1.build_tower(50,50,"t3.bmp",1,20);
		
		}
		display();
	}

}