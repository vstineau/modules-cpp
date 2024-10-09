
#include "Dog.hpp"
#include <iostream>

Dog::Dog(): AAnimal("Dog"), _brain(new Brain)
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(Dog const & src)
{
	*this = src;
}

Dog& Dog::operator=(Dog const & src)
{
	if (this != &src)
	{
		this->AAnimal::operator=(src);
		this->_type = src._type;
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Ouaf ouaf\n";
}

void Dog::displayIdea(int ideaIndex) const
{
	std::cout << this->_brain->getIdeas(ideaIndex) << std::endl;
}

void Dog::newIdea(int ideaIndex, std::string newIdea)
{
	this->_brain->setIdeas(ideaIndex, newIdea);
}
