
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal {

public:
	Dog();
	Dog(Dog const & src);
	~Dog();
	Dog &operator=(Dog const & src);
	void makeSound() const;

private:
};

#endif
