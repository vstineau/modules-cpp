
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap , virtual public FragTrap {

public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	~DiamondTrap();
	DiamondTrap &operator=(DiamondTrap const & src);
	void whoAmI() const;
	void displayStat()const;

private:
	DiamondTrap();
	std::string _name;
};

#endif
