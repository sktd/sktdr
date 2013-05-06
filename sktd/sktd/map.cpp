#include "map.h"

map::map::map(void)
{
	int x=100;
	for(int i=0;i<width*height;i++){
		tiles *wsk=new tiles(x,200, "tor1.bmp",1);
		track[i]=*wsk;
		x+=30;
	}

	int x2=120;
	for(int i=0;i<build;i++){
		tiles *wsk=new tiles (x2,150, "tor2.bmp",2);
		buildable[i]=*wsk;
		x2+=40;
	}
}


map::map::~map(void)
{
}

void map::map::begin_wave(double px, double py, std::string s, double vel, double hlth, int wrth, int hm)
{
	while(hm--){
		itm=mobs_list.begin();
		mobs *wsk=new mobs(px, py, s, vel, hlth, wrth);
		mobs_list.insert(itm, *wsk);
	}
	int x=0;
	itm=mobs_list.begin();
	while(itm!=mobs_list.end()){
			(*itm).move(x,0);
			++itm;
			x+=30;
	}
}

void map::map::end_wave()
{
}

void map::map::load_level(){

}

void map::map::build_tower(double px, double py, std::string s, double spd, int cst){
	towers *wsk=new towers(px, py, s, spd, cst);
	towers_list.push_back(*wsk);
}

void map::map::display(sf::RenderWindow &win){
	for(int i=0;i<height*width;i++)
		track[i].draw(win);
	
	for(int i=0;i<build;i++)
		buildable[i].draw(win);

	itm=mobs_list.begin();
	if(itm!=mobs_list.end()&&(*itm).get_pos_x()>get_end_x()){
		mobs_list.clear();
		itm=mobs_list.begin();
	}
	while(itm!=mobs_list.end()){
		(*itm).move();
		if((*itm).get_pos_x()>get_start_x()&&(*itm).get_pos_x()<get_end_x())
			(*itm).draw(win);
		++itm;
	}


	itt=towers_list.begin();
	while(itt!=towers_list.end()){
		(*itt).draw(win);
		(*itt).fire();
		++itt;
	}

}

double map::map::get_start_x()
{
	return track[0].get_pos_x();
}

double map::map::get_start_y()
{
	return track[0].get_pos_y();
}

double map::map::get_end_x()
{
	return track[width*height-1].get_pos_x();
}

double map::map::get_end_y()
{
	return track[width*height-1].get_pos_y();
}