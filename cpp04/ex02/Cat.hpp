
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public AAnimal {

public:
	Cat();
	Cat(Cat const & src);
	virtual ~Cat();
	Cat &operator=(Cat const & src);
	void makeSound() const;
	void newIdea(int ideaIndex, std::string newIdea);
	void displayIdea(int ideaIndex) const;

private:
	Brain *_brain;
};

#endif
