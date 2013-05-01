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
		void build_tower(double px, double py, std::string s, double sp, int cst);
		void display(sf::RenderWindow &win);
	private:
		const static int width=16;
		const static int height=16;
		std::vector <mobs> mobs_list;
		std::vector <projectiles> projectiles_list;
		std::vector <towers> towers_list;
		std::vector<mobs>::iterator itm;
		std::vector<towers>::iterator itt;
	//	tiles track[height][width];

	};
}

