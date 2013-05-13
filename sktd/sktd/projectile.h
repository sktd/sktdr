#pragma once
#include "movable.h"
#include <SFML/Graphics.hpp>
namespace map
{
	class projectile :
		public ent::movable
	{
	public:
		projectile(double px, double py, std::string s, double vel, double dmg, double ang);
		~projectile(void);
	//	void draw(sf::RenderWindow win);
	private:
		double damage;
		double angle;
	};
}

