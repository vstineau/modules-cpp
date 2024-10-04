
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constuctor called\n";
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap parametric constuctor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called\n";
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap& FragTrap::operator=(FragTrap const & src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_energyPoint = src._energyPoint;
		this->_hitPoint = src._hitPoint;
		this->_attackDammage = src._attackDammage;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " is doing an high five\n";
}
