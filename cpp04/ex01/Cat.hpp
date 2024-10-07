
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {

public:
	Cat();
	Cat(Cat const & src);
	~Cat();
	Cat &operator=(Cat const & src);
	void makeSound() const;

private:
	Brain *_brain;
};

#endif
