#include "mob.h"


map::mob::mob(double px, double py, std::string s, double vel, double hlth, int wrth):
	movable(px, py, s, vel), health(hlth), worth(wrth)
{
}

map::mob::mob(double px, double py, std::string s, double vel, double hlth, int wrth, std::vector <map::mob> &mobs_list)
{
	mobs_list.push_back(map::mob(px,py,s,vel,hlth,wrth));
}

map::mob::~mob(void)
{
}

 void map::mob::reduce_health(double hm)
{
}

//void map::mobs::draw(sf::RenderWindow &win){
//	//sp.move(velocity,0);
//	win.draw(sp);
//}