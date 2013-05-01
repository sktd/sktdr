#pragma once
#include "entities.h"
namespace ent
{
	class movable :
		public entities
	{
	public:
		movable(double px, double py, std::string s, double vel);
		~movable(void);
		bool collide(movable &a, movable &b);
		void move(double x, double y);
	protected:
		double velocity;
	};
}

