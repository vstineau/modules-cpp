#include "Zombie.hpp"
#include <iostream>

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << N << " is not a valid number of zombie\n";
		return (0);
	}
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setname(name);
	return (horde);
}
