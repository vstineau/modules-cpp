
#include "Character.hpp"
#include <iostream>

Character::Character()
{}

Character::Character(std::string name): _name(name), _floor(NULL), _itemNb(0), _idx(0)
{
	for (int i = 0; i < 4; i++)
		this->_item[i] = NULL;
}

Character::~Character()
{
	for (unsigned int i = 0; i < this->_itemNb; i++)
		delete this->_item[i];
	delete [] this->_floor;
}

Character::Character(Character const & src)
{
	*this = src;
}

Character& Character::operator=(Character const & src)
{
	if (this != &src)
	{
		this->_name = src._name;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	int i;

	i = 0;
	if (this->_itemNb < 4)
	{
		while (this->_item[i] != NULL)
			i++;
		this->_item[i] = m;
		this->_itemNb++;
	}
	else
		std::cout << "no space in inventory\n";
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "invalid index\n";
		return ;
	}
	if (this->_item[idx] == NULL)
	{
		std::cout << "nothing equiped on this inventory place\n";
		return ;
	}
	this->_floor[this->_idx] = this->_item[idx];
	this->_item[idx] = NULL;
	this->_itemNb--;
}

void Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "invalid index\n";
		return ;
	}
	if (this->_item[idx] == NULL)
	{
		std::cout << "nothing equiped on this inventory place\n";
		return ;
	}
	this->_item[idx]->use(target);
}
