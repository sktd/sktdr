#include "menu.h"


menu::menu::menu(int w, int h, int cd, int style, std::string t, double px, double py1, double py2, double py3, std::string s1, std::string s2, std::string s3, std::string s4):
	window(w, h, cd, style, t),
	p1(px, py1, s1),
	p2(px, py2, s2),
	p3(px, py3, s3)
{
	choice=1;
	ch=&p1;
	selt.loadFromFile(s4);
	sels.setTexture(selt);
	sels.setPosition(px-5,py1-5);
}


menu::menu::~menu(void)
{
}

void menu::menu::display(){
	win.clear(sf::Color::Black);
	win.draw(sels);
	p1.draw(win);
	p2.draw(win);
	p3.draw(win);
	win.display();
}

void menu::menu::navigate(/*sf::RenderWindow &win*/)
{
	while(win.isOpen())
	{
		sf::Event ev;
		while( win.pollEvent( ev ) )
		{
			if( ev.type == sf::Event::KeyPressed && ev.key.code == sf::Keyboard::Escape )
				win.close();

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
				(*ch).push();

			switch(choice){
			case 1:
				ch=&p1;
				sels.setPosition(p1.get_pos_x()-5,p1.get_pos_y()-5);
				break;
			case 2:
				ch=&p2;
				sels.setPosition(p2.get_pos_x()-5,p2.get_pos_y()-5);
				break;
			case 3:
				ch=&p3;
				sels.setPosition(p3.get_pos_x()-5,p3.get_pos_y()-5);
				break;
			}
		}
		display();
	}
}
