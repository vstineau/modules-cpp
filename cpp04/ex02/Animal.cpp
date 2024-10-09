
#include "Animal.hpp"
#include <iostream>

AAnimal::AAnimal(): _type("AAnimal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string const type): _type(type)
{
	std::cout << "AAnimal parametric constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal default destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	*this = src;
}

AAnimal& AAnimal::operator=(AAnimal const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->_type);
}

void AAnimal::setType(std::string newtype)
{
	this->_type = newtype;
}

void AAnimal::makeSound() const
{
	std::cout << "brrrrrrr\n";
}
