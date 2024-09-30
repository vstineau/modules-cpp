
#include "HumanA.hpp"
#include "HumanB.hpp"

//int main(void)
//{
//	Weapon	weapon("sword");
//	Weapon	weapon2("glock");
//	HumanA bob("bob",weapon);
//	HumanB bobby("bobby");
//	bobby.setWeapon(weapon2);
//	HumanB timmy("timmy");
//	timmy.attack();
//	bob.attack();
//	bobby.attack();
//}
int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
return 0;
}
