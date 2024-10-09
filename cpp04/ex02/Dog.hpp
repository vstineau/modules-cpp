
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public AAnimal {

public:
	Dog();
	Dog(Dog const & src);
	virtual ~Dog();
	Dog &operator=(Dog const & src);
	void makeSound() const;
	void newIdea(int ideaIndex, std::string newIdea);
	void displayIdea(int ideaIndex) const;

private:
	Brain *_brain;
};

#endif
