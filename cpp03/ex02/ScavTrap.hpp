
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(std:: string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const & src);
	void guardGate(void);
	void attack(std::string const & target);

private:
	ScavTrap();
};

#endif
