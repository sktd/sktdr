#pragma once
#include "entities.h"
namespace ent
{
	class immovable :
		public entities
	{
	public:
		immovable(double px, double py, std::string s);
		immovable();
		~immovable(void);
	};
}

