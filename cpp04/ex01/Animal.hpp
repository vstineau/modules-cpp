
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {

public:
	Animal();
	Animal(std::string const type);
	Animal(Animal const & src);
	virtual ~Animal();
	Animal &operator=(Animal const & src);
	std::string getType() const;
	void setType(std::string newtype);
	virtual void makeSound() const;

protected:
	std::string	_type;
};

#endif
