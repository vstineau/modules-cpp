
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std:: string name)
{
	std::cout << "Scavtrapp default constuctor called\n";
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDammage = 20;
}

void  ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is in gate keeper mode\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrapp default destructor called\n";
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & src)
{
	(void)src;
	return (*this);
}

