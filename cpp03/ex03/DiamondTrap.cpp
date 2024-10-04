
#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name, 100, 50, 30), ScavTrap(name, 100, 50, 30), FragTrap(name, 100, 50, 30), _name(name)
{
	std::cout << "DiamondTrap constuctor called\n";
	this->ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called\n";
}

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

void	DiamondTrap::displayStat() const
{
	std::cout << "name : " << this->_name << std::endl;
	std::cout << "hit point : " << this->_hitPoint << std::endl;
	std::cout << "energy point : " << this->_energyPoint << std::endl;
	std::cout << "attack dammage : " << this->_attackDammage << std::endl;
}

void	DiamondTrap::whoAmI() const
{
	std::cout << "my name is " << this->_name << std::endl;
	std::cout << "my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
