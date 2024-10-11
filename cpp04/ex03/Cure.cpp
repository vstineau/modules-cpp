
#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure()
{}

Cure::~Cure()
{}

Cure::Cure(Cure const & src)
{}

Cure& Cure::operator=(Cure const & src)
{}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

AMateria *Cure::clone() const
{
	return (new Cure);
}
