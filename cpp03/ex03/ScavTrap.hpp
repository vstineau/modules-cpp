
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
	ScavTrap(std:: string name, unsigned int hp, unsigned int ep, unsigned int ad);
	ScavTrap(std:: string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const & src);
	void guardGate(void);
	void attack(std::string const & target);

protected:
	ScavTrap();
};

#endif
