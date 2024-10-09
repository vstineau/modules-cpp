#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//const AAnimal *a = new AAnimal();
	const AAnimal *i = new Dog();
	const AAnimal *j = new Dog();
	Dog Dog1;
	Cat Cat1;
	Dog Dog2;
	Cat Cat2;
	Dog2 = Dog1;
	Cat2 = Cat1;
	Dog2.newIdea(5,"chihuahua");
	Cat2.newIdea(5,"maincoon");
	Dog1.displayIdea(5);
	Dog2.displayIdea(5);
	Cat1.displayIdea(5);
	Cat2.displayIdea(5);
	delete i;
	delete j;
	return 0;
}
