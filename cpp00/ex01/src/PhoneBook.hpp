
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook();
	~PhoneBook();
	void			print_phonebook() const;
	void			add_contact();
	unsigned int	get_size() const;

private:
	std::string	_get_infos(const char *prompt);
	void		_choose_contact() const;
	int			_isfullnum(std::string info) const;
	Contact			contact[8];
	unsigned int	size;
	unsigned int	index;
};

#endif
