#pragma once
#include <string>
#include <SFML/Graphics.hpp>
namespace ent
{
	class entities
	{
	public:
		entities();
		virtual ~entities(void);
	//	void virtual draw(sf::RenderWindow win)=0;
		double get_size_x();
		double get_size_y();
		double get_pos_x();
		double get_pos_y();
	
	protected:
		sf::Texture t;
		sf::Sprite sp;
		std::string source;
		//double pos_x;
		//double pos_y;
		//double size_x;
		//double size_y;
	};
}
