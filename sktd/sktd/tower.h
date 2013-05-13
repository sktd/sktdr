#pragma once
#include "immovable.h"
#include "projectile.h"
#include <SFML/Graphics.hpp>
namespace map
{
	class tower :
		public ent::immovable
	{
	public:
		tower(double px, double py, std::string s, double spd, int cst);
		tower(double px, double py, std::string s, int cst);
		~tower(void);
		void draw(sf::RenderWindow &win);
		void fire();
		int get_cost();
	//	projectiles projectile;
	private:
		std::vector<projectile> projectiles_list;
		std::vector<projectile>::iterator itp;
		double pos_x;
		double pos_y;
		int cost;
		double speed;
		sf::Clock clock;
	};
}
