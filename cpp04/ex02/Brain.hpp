
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {

public:
	Brain();
	Brain(Brain const & src);
	virtual ~Brain();
	Brain &operator=(Brain const & src);
	std::string getIdeas(int ideaIndex) const;
	void setIdeas(int ideaIndex, std::string newIdea);

private:
	std::string _ideas[100];
};

#endif
