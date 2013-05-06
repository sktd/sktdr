#include "mobs.h"


map::mobs::mobs(double px, double py, std::string s, double vel, double hlth, int wrth):
	movable(px, py, s, vel), health(hlth), worth(wrth)
{
}

map::mobs::mobs(double px, double py, std::string s, double vel, double hlth, int wrth, std::vector <map::mobs> &mobs_list)
{
	mobs_list.push_back(map::mobs(px,py,s,vel,hlth,wrth));
}

map::mobs::~mobs(void)
{
}

 void map::mobs::reduce_health(double hm)
{
}

//void map::mobs::draw(sf::RenderWindow &win){
//	//sp.move(velocity,0);
//	win.draw(sp);
//}