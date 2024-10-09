
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class AAnimal {

public:
	AAnimal();
	AAnimal(std::string const type);
	AAnimal(AAnimal const & src);
	virtual ~AAnimal() = 0;
	AAnimal &operator=(AAnimal const & src);
	std::string getType() const;
	void setType(std::string newtype);
	virtual void makeSound() const;

protected:
	std::string	_type;
};

#endif
