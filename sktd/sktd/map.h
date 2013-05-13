#pragma once
#include <vector>
#include "mob.h"
#include "projectile.h"
#include "tower.h"
#include "tile.h"
#include "player_console.h"
#include <stdio.h>
#define MAP_NONE -1
#define MAP_ROAD 1
#define MAP_GRASS 2
#define MAP_BUILDABLE 3


namespace map
{
	class map
	{
	public:
		map(void);
		~map(void);
		bool load_level(const char *filename);
		void begin_wave(double px, double py, std::string s, double vel, double hlth, int wrth, int hm);
		void end_wave();
		void build_tower(std::string s, double sp, int cst, engine::player_console &console);
		void display(sf::RenderWindow &win, engine::player_console &console);
		double get_start_x();
		double get_start_y();
		double get_end_x();
		double get_end_y();
		void move_chosen_r();
		void move_chosen_l();
	private:
		const static int width=6;
		const static int height=3;
		const static int build=10;
		std::vector <mob> mobs_list;
		std::vector <tower> towers_list;
		std::vector<mob>::iterator itm;
		std::vector<tower>::iterator itt;
		tile track[width][height];
		tile buildable[build];
		tile * chosen;
		sf::Clock clock;
	};
}

