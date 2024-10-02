#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamant;
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
