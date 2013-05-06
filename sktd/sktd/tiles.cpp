#include "tiles.h"


map::tiles::tiles(double px, double py, std::string s, int tp):
	immovable(px, py, s), type(tp)
{
}


map::tiles::~tiles(void)
{
}

void map::tiles::draw(sf::RenderWindow &win)
{
	win.draw(sp);
}

map::tiles::tiles()
{
}
