
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	std::cout << "Scavtrapp default constructor called\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "Scavtrapp parametric constructor called\n";
}

ScavTrap::ScavTrap(std:: string name, unsigned int hp, unsigned int ep, unsigned int ad): ClapTrap(name, hp, ep, ad)
{
	std::cout << "Scavtrapp parametric constructor called\n";
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
		this->_hitPoint = src._hitPoint;
		this->_energyPoint = src._energyPoint;
		this->_attackDammage = src._attackDammage;
		this->_name = src._name;
	}
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	if (this->_energyPoint > 0)
	{
		std::cout << "robot named " << this->_name << " attacked " << target << " whith Scvavtrap attack and did " << _attackDammage << " dammage\n";
		this->_energyPoint--;
		return ;
	}
	std::cout << "no energy point\n";
}
