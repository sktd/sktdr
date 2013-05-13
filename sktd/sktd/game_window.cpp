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
	map1.display(win, console);
	console.display(win);
	win.display();
}

void engine::game_window::handling_control(int &game_state)
{
	//while(win.isOpen()){
		sf::Event ev;
		while( win.pollEvent( ev ) )
		{
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Escape ){
				game_state=1;
				win.close();
			}
		
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Num1 )
				map1.build_tower("t1.png",100,20, console);
			
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Num2 )
				map1.build_tower("t2.png",100,20, console);
			
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Num3 )
				map1.build_tower("t3.png",100,20, console);
		
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Right )
				map1.move_chosen_r();
			
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Left )
				map1.move_chosen_l();
				
		
		}
		if(clock.getElapsedTime().asMilliseconds()==2000)
			map1.begin_wave(0, map1.get_start_y()+2.5, "pacman.png", 0.1, 2,2,3); 
		display();
//	}

}