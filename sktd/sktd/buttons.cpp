#include "buttons.h"


menu::buttons::buttons(double px, double py, std::string s):
	immovable(px, py, s)
{
}


menu::buttons::~buttons(void)
{
}

void menu::buttons::draw(sf::RenderWindow &win)
{
	win.draw(sp);
}

void menu::buttons::draw2(sf::RenderWindow &win)
{
	sf::Texture t;
	t.loadFromFile("ob.png");
	sf::Sprite sp2;
	sp2.setTexture(t);
	sp2.setPosition(get_pos_x()-5, get_pos_y()-5);
	win.draw(sp2);
}
