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

void map::tiles::draw2(sf::RenderWindow &win)
{
	sf::Texture t;
	t.loadFromFile("wyb.bmp");
	sf::Sprite sp2;
	sp2.setTexture(t);
	sp2.setPosition(get_pos_x(), get_pos_y());
	win.draw(sp2);
}

int map::tiles::get_type()
{
	return type;
}

void map::tiles::set_type(int t)
{
	type=t;
}