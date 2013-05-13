#include "towers.h"


map::towers::towers(double px, double py, std::string s, double spd, int cst):
	immovable(px, py, s), speed(spd), cost(cst), pos_x(px), pos_y(py)
{
}

map::towers::towers(double px, double py, std::string s, int cst):
	immovable(px,py,s), cost(cst)
{
}

map::towers::~towers(void)
{
}

void map::towers::draw(sf::RenderWindow &win)
{
	itp=projectiles_list.begin();
	while(itp!=projectiles_list.end()){
		(*itp).move(0,1);
		(*itp).draw(win);
		if((*itp).get_pos_x()>800||(*itp).get_pos_y()>600){
			projectiles_list.pop_back();
			break;
		}
		++itp;
	}
	win.draw(sp);
}

void map::towers::fire()
{
<<<<<<< HEAD
	if(clock.getElapsedTime().asMicroseconds()==1000){
=======
	if(clock.getElapsedTime().asMicroseconds()==1000000){
>>>>>>> b53e220505be5828ae5b4bc783bb957fe0e3c0ba
		itp=projectiles_list.begin();
		projectiles *wsk=new projectiles(pos_x+5, pos_y+5, "pocisk.png", 0.1,3,3);
		projectiles_list.insert(itp, *wsk);
		clock.restart();
	}
}

int map::towers::get_cost()
{
	return cost;
}


