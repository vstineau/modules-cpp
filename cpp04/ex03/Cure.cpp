
#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(Cure const & src)
{
	*this = src;
}

Cure& Cure::operator=(Cure const & src)
{
	(void)src;
	return (*this);
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

AMateria *Cure::clone() const
{
	return (new Cure);
}
