#pragma once
#include <string>
#include <SFML/Graphics.hpp>
namespace engine
{
	class window
	{
	public:
		window(int width, int height, int color_depth, int style, std::string title);
		virtual ~window(void);
		void virtual display()=0;
	protected:
		sf::RenderWindow win;
		/*int width;
		int height;
		int color_depth;
		int style;
		std::string title;*/
	};
}

