#include "utils.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	Character bobby("bobby");
	Character stan("stan");
	tmp = src->createMateria("cure");
	bobby.equip(tmp);
	tmp = src->createMateria("ice");
	bobby.equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->use(1, *bob);
	bobby.use(1, *bob);
	bobby.use(0, *bob);
	stan = bobby;
	bobby.unequip(1);
	stan.use(1, bobby);
	delete bob;
	delete src;
	delete me;
	return 0;
}
