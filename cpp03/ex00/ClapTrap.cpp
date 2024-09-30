
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): _hitPoint(10), _energyPoint(10), _attackDammage(0)
{}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDammage(0)
{}

ClapTrap::~ClapTrap()
{}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & src)
{
	(void)src;
	return *this;
}

void ClapTrap::setAttackDammage(unsigned int amount)
{
	std::cout << this->_name << " has now " << amount << " attack damage\n";
	this->_attackDammage = amount;
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_energyPoint == 0)
	{
		std::cout << "no energy point" << std::endl;
		return ;
	}
	std::cout << this->_name << " caused " << this->_attackDammage << " damage to " << target << std::endl;
	this->_energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " has taken " << amount << " attack damage, ";
	if (amount >= this->_hitPoint)
	{
		this->_hitPoint = 0;
		std::cout << this->_name << " is dead" << std::endl;
		return ;
	}
	this->_hitPoint -= amount;
	std::cout << this->_hitPoint << " hit point remaining\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint == 0)
	{
		std::cout << "no energy point" << std::endl;
		return ;
	}
	this->_hitPoint += amount;
	std::cout << this->_name << " has recover " << amount << " hit point, ";
	std::cout << this->_name << " has a total of " << this->_hitPoint << " hit point\n";
	this->_energyPoint--;
}
