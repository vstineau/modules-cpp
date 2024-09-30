
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _weapon(NULL), _name(name)
{}

HumanB::~HumanB()
{}

void	HumanB::attack() const
{
	if (!this->_weapon)
	{
		std::cout << this->_name << " has no weapon, he can't attack anybody\n";
		return ;
	}
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	std::cout << this->_weapon->getType() << std::endl;
}
