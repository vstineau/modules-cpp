
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {

public:
	WrongAnimal();
	WrongAnimal(std::string const type);
	WrongAnimal(WrongAnimal const & src);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const & src);
	std::string getType() const;
	virtual void makeSound() const;

protected:
	std::string	_type;
};

#endif
