#include "tower.h"


map::tower::tower(double px, double py, std::string s, double spd, int cst):
	immovable(px, py, s), speed(spd), cost(cst), pos_x(px), pos_y(py)
{
}

map::tower::tower(double px, double py, std::string s, int cst):
	immovable(px,py,s), cost(cst)
{
}

map::tower::~tower(void)
{
}

void map::tower::draw(sf::RenderWindow &win)
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

void map::tower::fire()
{
	if(clock.getElapsedTime().asMilliseconds()==100){
		itp=projectiles_list.begin();
		projectile *wsk=new projectile(pos_x+5, pos_y+5, "pocisk.png", 0.1,3,3);
		projectiles_list.insert(itp, *wsk);
		clock.restart();
	}
}

int map::tower::get_cost()
{
	return cost;
}


