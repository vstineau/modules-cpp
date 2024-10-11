
#ifndef CURE_HPP
# define CURE_HPP

#include "Utils.hpp"
#include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure();
	Cure(Cure const & src);
	~Cure();
	Cure &operator=(Cure const & src);
	AMateria *clone() const;
	void use(ICharacter& target);

private:
};

#endif
