#include "towers.h"


map::towers::towers(double px, double py, std::string s, double spd, int cst):
	immovable(px, py, s), speed(spd), cost(cst)
{
}


map::towers::~towers(void)
{
}

void map::towers::draw(sf::RenderWindow &win)
{
	win.draw(sp);
}