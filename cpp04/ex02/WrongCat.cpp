
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "i love Windows\n";
}
