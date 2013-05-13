#pragma once
#include "movable.h"
#include <SFML/Graphics.hpp>
namespace map
{
	class mob :
		public ent::movable
	{
	public:
		mob(double px, double py, std::string s, double vel, double hlth, int wrth);
		mob(double px, double py, std::string s, double vel, double hlth, int wrth, std::vector <mob> &mobs_list);
		~mob(void);
	//	void draw(sf::RenderWindow &win);
		void reduce_health(double how_many);
	private:
		double health;
		int worth;
	};
}

