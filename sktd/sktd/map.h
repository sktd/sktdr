#pragma once
#include <vector>
#include "mobs.h"
#include "projectiles.h"
#include "towers.h"
#include "tiles.h"
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
		const static int width=16;
		const static int height=16;
		const static int build=10;
		std::vector <mobs> mobs_list;
		std::vector <towers> towers_list;
		std::vector<mobs>::iterator itm;
		std::vector<towers>::iterator itt;
		tiles track[width*height];
		tiles buildable[build];
		tiles * chosen;
		sf::Clock clock;
	};
}

