
#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "default idea";
}

Brain::~Brain()
{
}

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

std::string Brain::getIdeas(int ideaindex) const
{
	return (this->_ideas[ideaindex]);
}

void Brain::setIdeas(int ideaindex, std::string newIdea)
{
	this->_ideas[ideaindex] = newIdea;
}
