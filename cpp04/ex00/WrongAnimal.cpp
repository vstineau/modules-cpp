
#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): _type("Wronganimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const type): _type(type)
{
	std::cout << "WrongAnimal parametric constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "hi\n";
}
