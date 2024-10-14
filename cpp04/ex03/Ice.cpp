
#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice")
{}

Ice::~Ice()
{}

Ice::Ice(Ice const & src)
{
	*this = src;
}

Ice& Ice::operator=(Ice const & src)
{
	(void)src;
	return (*this);
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoot an ice bolt at " << target.getName() << " *\n";
}

AMateria *Ice::clone() const
{
	return (new Ice);
}
