
#include "Animal.hpp"
#include <iostream>

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string const type): _type(type)
{
	std::cout << "Animal parametric constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	*this = src;
}

Animal& Animal::operator=(Animal const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::makeSound() const
{
	std::cout << "brrrrrrr\n";
}
