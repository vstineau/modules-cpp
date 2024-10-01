#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap bob("bob");
	FragTrap steve("steve");
	bob.attack("steve");
	bob.takeDamage(3);
	bob.beRepaired(13);
	bob.takeDamage(20);
	bob.guardGate();
	steve.takeDamage(3);
	steve.beRepaired(13);
	steve.takeDamage(20);
	steve.highFivesGuys();
}
