
#include "Zombie.hpp"

int main(void)
{
	Zombie *horde0 = zombieHorde(0, "foo");
	(void)horde0;
	Zombie *horde = zombieHorde(-10, "ok");
	for (int i = 0; i < horde->zombieNb; i++)
		horde[i].announce();
	delete [] horde;
}
