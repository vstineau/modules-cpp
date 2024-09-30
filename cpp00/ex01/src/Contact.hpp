
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

public:
	Contact();
	~Contact();
	void	print_contact(unsigned int index) const ;
	void	set_first_name(std::string str);
	void	set_last_name(std::string str);
	void	set_nickname(std::string str);
	void	set_phone_number(std::string str);
	void	set_darkest_secret(std::string str);
	const std::string	get_first_name() const;
	const std::string	get_last_name() const;
	const std::string	get_nickname() const;
	const std::string	get_phone_number() const;
	const std::string	get_darkest_secret() const;

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif
