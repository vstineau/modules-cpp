#include <iomanip>
#include "PhoneBook.hpp"
#include "color.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>

PhoneBook::PhoneBook() : size(0), index(0)
{}

PhoneBook::~PhoneBook()
{}

unsigned int PhoneBook::get_size() const
{
	return (this->size);
}

int	PhoneBook::_isfullnum(std::string info) const
{
	for (int i = 0; info[i]; i++)
		if(!isdigit(info[i]))
			return (0);
	return (1);
}

std::string	PhoneBook::_get_infos(const char *prompt)
{
	std::string	info;

	std::cout << B_MAGENTA << prompt << RESET << std::endl;
	std::getline(std::cin, info);
	while (info.empty())
	{
		if (std::cin.eof())
			exit(1);
		std::cout << B_RED << "empty information" << RESET << std::endl;
		std::cout << B_MAGENTA << prompt << RESET << std::endl;
		std::getline(std::cin, info);
	}
	return (info);
}

void PhoneBook::add_contact()
{
	std::string info;
	info = this->_get_infos("please enter your first name");
	this->contact[this->index].set_first_name(info);
	info = this->_get_infos("please enter your last name");
	this->contact[this->index].set_last_name(info);
	info = this->_get_infos("please enter your nickname");
	this->contact[this->index].set_nickname(info);
	info = this->_get_infos("please enter your phone number");
	this->contact[this->index].set_phone_number(info);
	info = this->_get_infos("please enter your darkest secret");
	this->contact[this->index].set_darkest_secret(info);
	std::cout << std::endl << BHI_GREEN << "contact successfully created" << RESET << std::endl;
	if (this->size < 8)
		this->size++;
	this->index++;
	this->index %= 8;
}

void PhoneBook::_choose_contact() const
{
	std::string	info;
	unsigned int index;

	std::cout << BLINK << B_YELLOW << "please choose an index" << RESET << std::endl;
	std::getline(std::cin, info);
	index = std::atoi(info.c_str());
	while (!_isfullnum(info) || index >= this->size || index < 0 || info.length() > 1 || info.empty() )
	{
		if (std::cin.eof())
			exit(1);
		std::cout << B_RED << "wrong index" << RESET << std::endl;
		std::cout << BLINK << B_YELLOW << "please choose an index" << RESET << std::endl;
		std::getline(std::cin, info);
		index = std::atoi(info.c_str());
	}
	this->contact[index].print_contact(index);
}

void PhoneBook::print_phonebook() const
{
	std::string temp;

	std::cout << "*___________________________________________*\n";
	std::cout <<  "|" << BHI_BLUE << std::setw(10) << "index" << RESET;
	std::cout <<  "|" << BHI_BLUE << std::setw(10) << "first name" << RESET;
	std::cout <<  "|" << BHI_BLUE << std::setw(10) << "last name" << RESET;
	std::cout <<  "|" << BHI_BLUE << std::setw(10) << "nickname" << RESET << "|";
	std::cout << std::endl;
	std::cout << "*___________________________________________*\n";
	for (unsigned int i = 0; i < this->size; i++)
	{
		std::cout << "|" << BHI_GREEN << std::setw(10) << i << RESET;
		temp = this->contact[i].get_first_name();
		if (temp.length() > 10)
		{
			temp.resize(10);
			temp[9] = '.';
		}
		std::cout << "|" << BHI_GREEN << std::setw(10) << temp << RESET;
		temp = this->contact[i].get_last_name();
		if (temp.length() > 10)
		{
			temp.resize(10);
			temp[9] = '.';
		}
		std::cout << "|" << BHI_GREEN << std::setw(10) << temp << RESET;
		temp = this->contact[i].get_nickname();
		if (temp.length() > 10)
		{
			temp.resize(10);
			temp[9] = '.';
		}
		std::cout << "|" << BHI_GREEN << std::setw(10) << temp << RESET << "|";
		std::cout << std::endl;
		std::cout << "*___________________________________________*\n";
		std::cout << RESET;
	}
	this->_choose_contact();
}
