
#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *random_zombie = new Zombie(name);
	return (random_zombie);
}
