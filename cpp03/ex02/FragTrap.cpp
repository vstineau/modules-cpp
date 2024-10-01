
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap default constuctor called\n";
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDammage = 20;
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
