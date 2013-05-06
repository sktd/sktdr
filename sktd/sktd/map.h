#pragma once
#include <vector>
#include "mobs.h"
#include "projectiles.h"
#include "towers.h"
#include "tiles.h"

namespace map
{
	class map
	{
	public:
		map(void);
		~map(void);
		void load_level();
		void begin_wave(double px, double py, std::string s, double vel, double hlth, int wrth, int hm);
		void end_wave();
		void build_tower(double px, double py, std::string s, double sp, int cst);
		void display(sf::RenderWindow &win);
		double get_start_x();
		double get_start_y();
		double get_end_x();
		double get_end_y();
		double get_chosen_x();
		double get_chosen_y();
		void move_chosen_r();
		void move_chosen_l();
	private:
		const static int width=3;
		const static int height=6;
		const static int build=10;
		std::vector <mobs> mobs_list;
		std::vector <towers> towers_list;
		std::vector<mobs>::iterator itm;
		std::vector<towers>::iterator itt;
		tiles track[width*height];
		tiles buildable[build];
		tiles * chosen;
	};
}

