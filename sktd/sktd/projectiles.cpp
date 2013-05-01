#include "projectiles.h"


map::projectiles::projectiles(double px, double py, std::string s, double vel, double dmg, double ang):
	movable(px, py, s, vel), damage(dmg), angle(ang)
{
}


map::projectiles::~projectiles(void)
{
}
