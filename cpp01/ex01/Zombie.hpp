
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {

public:
	Zombie();
	~Zombie();
	static int zombieNb;
	void setname(std::string name);
	void announce(void) const;

private:
	std::string _name;
	int _index;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
