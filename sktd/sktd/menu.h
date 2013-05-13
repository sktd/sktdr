#pragma once
#include "window.h"
#include "new_game.h"
#include "continue_game.h"
#include "end_game.h"
#include <SFML/Graphics.hpp>
namespace menu
{
	class menu :
		public engine::window
	{
	public:
		menu(int w, int h, int cd, int style, std::string t, double px, double py1, double py2, double py3, std::string s1, std::string s2, std::string s3);
		~menu(void);
		void display();
		void handling_control(int &game_state);
	private:
		menu::new_game p1;
		menu::continue_game p2;
		menu::end_game p3;
		sf::Text title;
		sf::Texture selt;
		sf::Sprite sels;
		int choice;
		menu::button *chosen;
		sf::Font font;
	};
}

