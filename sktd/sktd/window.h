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
		void virtual handling_control(int &game_state)=0;
		bool isOpen();
	protected:
		sf::RenderWindow win;
	};
}

