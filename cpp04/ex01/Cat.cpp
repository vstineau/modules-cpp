
#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(Cat const & src)
{
	*this = src;
}

Cat& Cat::operator=(Cat const & src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "miaou miaou\n";
}
