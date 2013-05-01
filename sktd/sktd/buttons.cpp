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
