
#include "Zombie.hpp"
#include <iostream>

int Zombie::zombieNb = 0;

Zombie::Zombie()
{
	std::cout << "zombie nbr" << zombieNb << " is alive again" << std::endl;
	this->_index = zombieNb;
	zombieNb++;
}

Zombie::~Zombie()
{
	std::cout << "zombie nbr" << this->_index << " is definitly dead" << std::endl;
}

void	Zombie::announce() const
{
	std::cout << this->_name << " num " << this->_index << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string name)
{
	this->_name = name;
}
