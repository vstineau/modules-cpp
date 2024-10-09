
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat"), _brain(new Brain)
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(Cat const & src)
{
	this->_brain = new Brain();
	*this = src;
}

Cat& Cat::operator=(Cat const & src)
{
	if (this != &src)
	{
		this->Animal::operator=(src);
		this->_type = src._type;
		*(this->_brain) = *(src._brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "miaou miaou\n";
}

void Cat::displayIdea(int ideaIndex) const
{
	std::cout << this->_brain->getIdeas(ideaIndex) << std::endl;
}

void Cat::newIdea(int ideaIndex, std::string newIdea)
{
	this->_brain->setIdeas(ideaIndex, newIdea);
}
