
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): _hitPoint(10), _energyPoint(10), _attackDammage(0)
{
	std::cout << "claptrap default constuctor called\n";
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDammage(0)
{
	std::cout << "claptrap parametric constuctor called\n";
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad): _name(name), _hitPoint(hp), _energyPoint(ep), _attackDammage(ad)
{
	std::cout << "claptrap parametric constuctor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "claptrap default destructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoint = src._hitPoint;
		this->_energyPoint = src._energyPoint;
		this->_attackDammage = src._attackDammage;
	}
	return *this;
}

void ClapTrap::setAttackDammage(unsigned int amount)
{
	std::cout << this->_name << " has now " << amount << " attack damage\n";
	this->_attackDammage = amount;
}

void	 ClapTrap::attack(std::string const & target)
{
	if (this->_hitPoint == 0)
	{
		std::cout << this->_name << " is already dead " << std::endl;
		return ;
	}
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
	if (this->_hitPoint == 0)
	{
		std::cout << this->_name << " is already dead " << std::endl;
		return ;
	}
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
	if (this->_hitPoint == 0)
	{
		std::cout << this->_name << " is already dead " << std::endl;
		return ;
	}
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
