#pragma once
#include "movable.h"
#include <SFML/Graphics.hpp>
namespace map
{
	class mobs :
		public ent::movable
	{
	public:
		mobs(double px, double py, std::string s, double vel, double hlth, int wrth);
		~mobs(void);
		void draw(sf::RenderWindow &win);
		void reduce_health(double how_many);
	private:
		double health;
		int worth;
	};
}

