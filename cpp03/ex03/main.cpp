#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamant("diamant");

	diamant.displayStat();
	diamant.attack("bob");
	diamant.whoAmI();
	diamant.takeDamage(20);
	diamant.beRepaired(13);
	diamant.guardGate();
	diamant.highFivesGuys();
}
