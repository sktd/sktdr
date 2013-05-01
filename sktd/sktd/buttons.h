#pragma once
#include "immovable.h"
#include <SFML\Graphics.hpp>
namespace menu
{
	class buttons :
		public ent::immovable
	{
	public:
		buttons(double px, double py, std::string s);
		~buttons(void);
		void virtual push()=0;
		void draw(sf::RenderWindow &win);
	};
}
