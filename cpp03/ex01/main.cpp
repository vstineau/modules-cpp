#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap steve("steve");
	ScavTrap bob("bob");
	steve.attack("bob");
	bob.attack("steve");
	bob.takeDamage(3);
	bob.beRepaired(13);
	bob.takeDamage(20);
	bob.guardGate();
}
