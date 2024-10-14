
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "utils.hpp"
#include <string>

class AMateria {

public:
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual~ AMateria();
	AMateria &operator=(AMateria const & src);
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter& target);
	std::string const & getType() const;

protected:
	AMateria();
	std::string const _type;
};

#endif
