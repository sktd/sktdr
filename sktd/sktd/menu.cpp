#include "menu.h"


menu::menu::menu(int w, int h, int cd, int style, std::string t, double px, double py1, double py2, double py3, std::string s1, std::string s2, std::string s3):
	window(w, h, cd, style, t),
	p1(px, py1, s1),
	p2(px, py2, s2),
	p3(px, py3, s3)
{
	choice=1;
	chosen=&p1;
	font.loadFromFile("Andale_Mono.ttf");
	title.setFont(font);
	title.setCharacterSize(60);
	title.setColor(sf::Color::White);
	title.setString("SK Tower Defense");
	title.setPosition(140,10);
}


menu::menu::~menu(void)
{
}

void menu::menu::display(){
	win.clear(sf::Color::Black);
	p1.draw(win);
	p2.draw(win);
	p3.draw(win);
	win.draw(title);
	(*chosen).draw2(win);
	win.display();
}

void menu::menu::handling_control(int &game_state)
{
//	while(win.isOpen())
//	{
		sf::Event ev;
		while( win.pollEvent( ev ) )
		{

			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Down )
				if(choice!=3)
					choice++;
				else
					choice=1;
			
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Up )
				if(choice!=1)
					choice--;
				else
					choice=3;
			
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Return )
				chosen->push(win, game_state);

			switch(choice){
			case 1:
				chosen=&p1;
				break;
			case 2:
				chosen=&p2;
				break;
			case 3:
				chosen=&p3;
				break;
			}
		}
		display();
	//}
}
