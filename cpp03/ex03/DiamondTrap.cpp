
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{}

DiamondTrap::DiamondTrap(std::string name): FragTrap(name), ScavTrap(name), 
{
	std::cout << "FragTrap default constuctor called\n";
	this->_name = name;
	this->_hitPoint = FragTrap:_hitpoint;
	this->_energyPoint = 50;
	this->_attackDammage = 30;
}

DiamondTrap::~DiamondTrap()
{}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	*this = src;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & src)
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

