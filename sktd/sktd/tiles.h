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
		tiles();
		~tiles(void);
		void draw(sf::RenderWindow &win);
		void draw2(sf::RenderWindow &win);
		int get_type();
		void set_type(int t);
	private:
		int type;
	};
}
