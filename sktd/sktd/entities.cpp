#include "entities.h"


ent::entities::entities()
{
}


ent::entities::~entities(void)
{
}

double ent::entities::get_size_x()
{
	return t.getSize().x;
}

double ent::entities::get_size_y()
{
	return t.getSize().y;
}

double ent::entities::get_pos_x()
{
	return sp.getPosition().x;
}

double ent::entities::get_pos_y()
{
	return sp.getPosition().y;
}