
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon const &weapon): _weapon(weapon), _name(name)
{
}

HumanA::~HumanA()
{}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon.getType();
	std::cout << std::endl;
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}
