
#include "Contact.hpp"
#include "color.hpp"
#include <iostream>

Contact::Contact()
{}

Contact::~Contact()
{}

void Contact::print_contact(unsigned int index) const 
{
	std::cout << U_GREEN << "Contact n." << index << RESET << "\n\n";
	std::cout << HI_GREEN;
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "phone_number: " << this->phone_number << std::endl;
	std::cout << "darkest_secret: " << this->darkest_secret << std::endl;
	std::cout <<std::endl;
	std::cout << RESET;
}

const std::string	Contact::get_first_name() const
{
	return (this->first_name);
}

const std::string	Contact::get_last_name() const
{
	return (this->last_name);
}

const std::string	Contact::get_nickname() const
{
	return (this->nickname);
}

const std::string	Contact::get_phone_number() const
{
	return (this->phone_number);
}

const std::string	Contact::get_darkest_secret() const
{
	return (this->darkest_secret);
}
void	Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void	Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void	Contact::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
}
