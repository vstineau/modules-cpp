
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "Utils.hpp"
#include <string>

class AMateria {

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	~AMateria();
	AMateria &operator=(AMateria const & src);
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter& target);
	std::string const & getType() const;

protected:
	std::string const _type;
};

#endif
