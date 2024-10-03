
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
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoint = src._hitPoint;
		this->_energyPoint = src._energyPoint;
		this->_attackDammage = src._attackDammage;
	}
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	if (this->_energyPoint > 0)
	{
		std::cout << "robot named " << this->_name << " attacked " << target << " whith Scvavtrap attack and did " << _attackDammage << " damege\n";
		this->_energyPoint--;
		return ;
	}
	std::cout << "no energy point\n";
}
