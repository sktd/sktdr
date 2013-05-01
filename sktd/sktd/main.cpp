#include "menu.h"
#include "mobs.h"
#include "game_window.h"
#include <vector>
#include <string>
int main()
{
	menu::menu m1(800, 600, 32, 3, "SKTD", 200, 10, 130, 250, "p1.png", "p1.png", "p1.png", "ob.bmp");
	m1.navigate();

	//engine::game_window gw(800, 600, 32, 1, "SKTD");
	//gw.map1.begin_wave(10,100,"pacman.bmp",1,1,1,4);
	//gw.handling_control();

	/*sf::RenderWindow win(sf::VideoMode(800,600,32),"SKTD");
	std::vector <map::mobs> mob_list;
	std::vector<map::mobs>::iterator itm;
	itm=mob_list.begin();
	map::mobs a(200, 100, "pacman.bmp", 1, 1, 1);
	mob_list.insert(itm, a);
	int x=0;
	itm=mob_list.begin();
	while(itm!=mob_list.end()){
			(*itm).move(x,0);
			++itm;
			x+=30;
	}
	while(win.isOpen())
	{
		sf::Event ev;
		while( win.pollEvent( ev ) )
		{
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Escape )
				win.close();
		}
		win.clear(sf::Color::Black);
		itm=mob_list.begin();
		while(itm!=mob_list.end()){
			(*itm).move(0.1,0);
			(*itm).draw(win);
			++itm;
		}
		win.display();
	}*/


    return 0;
}