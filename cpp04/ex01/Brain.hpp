
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {

public:
	Brain();
	Brain(Brain const & src);
	~Brain();
	Brain &operator=(Brain const & src);

private:
	std::string _ideas[100];
};

#endif
