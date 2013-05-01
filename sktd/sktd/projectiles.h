#pragma once
#include "movable.h"
#include <SFML/Graphics.hpp>
namespace map
{
	class projectiles :
		public ent::movable
	{
	public:
		projectiles(double px, double py, std::string s, double vel, double dmg, double ang);
		~projectiles(void);
	//	void draw(sf::RenderWindow win);
	private:
		double damage;
		double angle;
	};
}

