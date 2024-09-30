#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap bob("bob");
	bob.attack("steve");
	bob.takeDamage(3);
	bob.beRepaired(13);
	bob.takeDamage(20);
	bob.guardGate();
}
