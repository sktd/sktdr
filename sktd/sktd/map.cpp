#include "map.h"

map::map::map(void)
{
//	itt=towers_list.begin();
}


map::map::~map(void)
{
}

void map::map::begin_wave(double px, double py, std::string s, double vel, double hlth, int wrth, int hm)
{
	itm=mobs_list.begin();
	mobs m(px, py, s, vel, hlth, wrth);
	mobs_list.insert(itm, m);
		
}

void map::map::load_level(){

}

void map::map::build_tower(double px, double py, std::string s, double spd, int cst){
	itt=towers_list.begin();
	towers t(px, py, s, spd, cst);
	towers_list.insert(itt, t);
}

void map::map::display(sf::RenderWindow &win){
	itm=mobs_list.begin();
	while(itm!=mobs_list.end()){
		(*itm).draw(win);
		++itm;
	}
	itt=towers_list.begin();
	while(itt!=towers_list.end()){
		(*itt).draw(win);
		++itt;
	}
}