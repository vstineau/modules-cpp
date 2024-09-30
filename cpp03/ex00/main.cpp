#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap bob("bob");
	bob.setAttackDammage(12);
	bob.attack("steve");
	bob.takeDamage(3);
	bob.beRepaired(13);
	for (int i = 0; i < 9; i++)
		bob.attack("steve");
	bob.takeDamage(20);
}
