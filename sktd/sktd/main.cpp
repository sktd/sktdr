#include "menu.h"
#include "mob.h"
#include "game_window.h"
#include "game_engine.h"
#include <vector>
#include <string>
int main()
{
//	engine::game_window gw(800, 600, 32, 1, "SKTD");
	engine::game_engine engine;
	//engine.window=new menu::menu(800, 600, 32, 3, "SKTD", 200, 150, 270, 390, "p1.png", "p1.png", "p1.png");
	engine.manage_game();
	
	/*menu::menu m1(800, 600, 32, 3, "SKTD", 200, 10, 130, 250, "p1.png", "p1.png", "p1.png");
	m1.handling_control();*/
	/*sf::Image im;
	im.loadFromFile("ob.bmp");
	im.createMaskFromColor(sf::Color::Black);
	im.saveToFile("ob.png");*/
	/*engine::game_window gw(800, 600, 32, 1, "SKTD");*/
	//gw.map1.begin_wave(10,10,"pacman.bmp",0.01,1,1,4);
	//gw.map1.build_tower(300, 300, "t1.bmp", 2,2);
	/*gw.handling_control();*/

	/*sf::RenderWindow win(sf::VideoMode(800,600,32),"SKTD");

	sf::Font f;
	f.loadFromFile("Andale_Mono.ttf");
	sf::Text tekst("10", f, 30);
	tekst.setColor(sf::Color::White);

	sf::Clock clock;
	std::vector <map::mobs> mob_list;
	std::vector<map::mobs>::iterator itm;
	itm=mob_list.begin();
	map::mobs a(200, 100, "pacman.bmp", 1, 1, 1);
	mob_list.insert(itm,5, a);
	int x=0;
	itm=mob_list.begin();
	while(itm!=mob_list.end()){
			(*itm).move(x,0);
			++itm;
			x+=30;
			clock.restart();
		
	}

	while(win.isOpen())
	{
		sf::Event ev;
		while( win.pollEvent( ev ) )
		{
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Escape )
				win.close();
		}
		itm=mob_list.begin();
		win.clear(sf::Color::Black);
		if(int(clock.getElapsedTime().asSeconds())>5){
			while(itm!=mob_list.end()){
				(*itm).move(0.1,0);
				(*itm).draw(win);
				++itm;
			}
		}

		win.draw(tekst);

		win.display();
	}*/


    return 0;
}