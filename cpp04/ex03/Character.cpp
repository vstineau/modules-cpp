
#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character()
{}

Character::Character(std::string name): _name(name), _itemNb(0), _idx(0), _floorNb(0)
{
	for (int i = 0; i < 4; i++)
		this->_item[i] = NULL;
	for (int i = 0; i < 10; i++)
		this->_item[i] = NULL;
}

Character::~Character()
{
	std::cout << _name << " " << _itemNb << std::endl;
	for (unsigned int i = 0; i < this->_itemNb; i++)
	{
		if (this->_item[i] != NULL)
			delete this->_item[i];
	}
	for (unsigned int i = 0; i < this->_floorNb; i++)
	{
		if (this->_floor[i] != NULL)
			delete this->_floor[i];
	}
}

Character::Character(Character const & src)
{
	*this = src;
}

Character& Character::operator=(Character const & src)
{
	if (this != &src)
	{
		for (unsigned int i = 0; i < this->_itemNb; i++ )
			delete this->_item[i];
		this->_name = src._name;
		this->_itemNb = src._itemNb;
		for (unsigned int i = 0; i < this->_itemNb; i++)
			this->_item[i] = src._item[i]->clone();
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
		while (this->_item[i] != NULL && i < 4)
			i++;
		std::cout << this->_name << " equiped " << m->getType() << " \n";
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
	if (this->_floorNb == 10)
	{
		std::cout << "no space on floor keep your materia\n";
		return ;
	}
	std::cout << this->_name << " unequiped " << this->_item[idx]->getType() << " \n";
	this->_floor[this->_idx] = this->_item[idx];
	this->_item[idx] = NULL;
	this->_itemNb--;
	this->_floorNb++;
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
