#include "movable.h"


ent::movable::movable(double px, double py, std::string s, double vel):
	velocity(vel)
{
	t.loadFromFile(s);
	sp.setTexture(t);
	sp.setPosition(px,py);
}

ent::movable::movable(void)
{
}

ent::movable::~movable(void)
{
}

void ent::movable::move()
{
	sp.move(velocity,0);
}

void ent::movable::move(double x, double y)
{
	sp.move(x,y);
}

void ent::movable::draw(sf::RenderWindow &win)
{
	win.draw(sp);
}

//bool collide(ent::movable &a, ent::movable &b){}