
#ifndef CURE_HPP
# define CURE_HPP

#include "utils.hpp"
#include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure();
	Cure(Cure const & src);
	virtual ~Cure();
	Cure &operator=(Cure const & src);
	AMateria *clone() const;
	void use(ICharacter& target);

private:
};

#endif
