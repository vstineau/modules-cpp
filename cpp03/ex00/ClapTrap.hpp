
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {

public:
	ClapTrap();
	ClapTrap(std:: string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap const & src);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setAttackDammage(unsigned int amount);

private:
	std::string _name;
	unsigned int _hitPoint;
	unsigned int _energyPoint;
	unsigned int _attackDammage;
};

#endif
