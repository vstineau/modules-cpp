
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "utils.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter {

public:
	Character(std::string name);
	Character(Character const & src);
	virtual ~Character();
	Character &operator=(Character const & src);
	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter & target);

private:
	Character();
	std::string _name;
	AMateria *_item[4];
	AMateria *_floor[10];
	unsigned int _itemNb;
	unsigned int _idx;
	unsigned int _floorNb;
};

#endif
