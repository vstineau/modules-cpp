
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria()
{
	//std::cout << "AMateria constructor called\n";
}

AMateria::AMateria(std::string const & type): _type(type)
{
	//std::cout << "AMateria constructor called\n";
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor called\n";
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria& AMateria::operator=(AMateria const & src)
{
	(void)src;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter & target)
{
	std::cout << target.getName() <<"is using materia\n";
}

