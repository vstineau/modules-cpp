
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

public:
	HumanA(std::string name, Weapon const &weapon);
	~HumanA();
	void setName(std::string name);
	void attack() const;

private:
	Weapon const &_weapon;
	std::string _name;
};

#endif
