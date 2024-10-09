
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {

public:
	WrongCat();
	WrongCat(WrongCat const & src);
	virtual ~WrongCat();
	WrongCat &operator=(WrongCat const & src);
	void makeSound() const;

private:
};

#endif
