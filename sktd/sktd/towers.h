#pragma once
#include "immovable.h"
#include "projectiles.h"
#include <SFML/Graphics.hpp>
namespace map
{
	class towers :
		public ent::immovable
	{
	public:
		towers(double px, double py, std::string s, double spd, int cst);
		towers(double px, double py, std::string s, int cst);
		~towers(void);
		void draw(sf::RenderWindow &win);
		void fire();
		int get_cost();
	//	projectiles projectile;
	private:
		std::vector<projectiles> projectiles_list;
		std::vector<projectiles>::iterator itp;
		double pos_x;
		double pos_y;
		int cost;
		double speed;
		sf::Clock clock;
	};
}
