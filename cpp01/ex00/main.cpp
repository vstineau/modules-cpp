
#include "Zombie.hpp"

int main(void)
{
	randomChump("foo");
	Zombie *zombie = newZombie("alsofoobutallocated");
	zombie->announce();
	delete zombie;
}
