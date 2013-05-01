#include "movable.h"


ent::movable::movable(double px, double py, std::string s, double vel):
	velocity(vel)
{
	t.loadFromFile(s);
	sp.setTexture(t);
	sp.setPosition(px,py);
}


ent::movable::~movable(void)
{
}

void ent::movable::move(double x, double y)
{
	sp.move(x, y);
}
