
#include "Brain.hpp"

Brain::Brain()
{}

Brain::~Brain()
{}

Brain::Brain(Brain const & src)
{
	*this = src;
}

Brain& Brain::operator=(Brain const & src)
{
	if (this != &src)
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	return (*this);
}

