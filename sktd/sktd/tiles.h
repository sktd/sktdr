#pragma once
#include "immovable.h"
#include <SFML/Graphics.hpp>
namespace map
{
	class tiles :
		public ent::immovable
	{
	public:
		tiles(double px, double py, std::string s, int tp);
		~tiles(void);
		void draw(sf::RenderWindow &win);
	private:
		int type;
	};
}
