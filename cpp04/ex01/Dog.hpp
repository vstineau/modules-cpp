
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {

public:
	Dog();
	Dog(Dog const & src);
	~Dog();
	Dog &operator=(Dog const & src);
	void makeSound() const;

private:
	Brain *_brain;
};

#endif
