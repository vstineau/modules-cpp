
#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(): _materiaNb(0)
{
	for (int i = 0; i < 4; i++)
		this->_source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (unsigned int i = 0; i < this->_materiaNb; i++)
		delete this->_source[i];
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & src)
{
	(void)src;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_materiaNb == 4)
	{
		std::cout << "no space in memory for learn a new materia\n";
		return ;
	}
	this->_source[this->_materiaNb] = materia;
	this->_materiaNb++;
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] && this->_source[i]->getType() == type)
			return (this->_source[i]->clone());
	}
	std::cout << "i dont know tgis type\n";
	return (0);
}
