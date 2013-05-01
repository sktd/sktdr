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
		~towers(void);
		void draw(sf::RenderWindow &win);
		void fire();
	//	projectiles projectile;
	private:
		int cost;
		double speed;
	};
}
