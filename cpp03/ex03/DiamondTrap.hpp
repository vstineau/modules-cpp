
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap {

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	~DiamondTrap();
	DiamondTrap &operator=(DiamondTrap const & src);

private:
	std::string _name;
};

#endif
