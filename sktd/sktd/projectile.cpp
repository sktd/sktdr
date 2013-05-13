#include "projectile.h"


map::projectile::projectile(double px, double py, std::string s, double vel, double dmg, double ang):
	movable(px, py, s, vel), damage(dmg), angle(ang)
{
}


map::projectile::~projectile(void)
{
}
