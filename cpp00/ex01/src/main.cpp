#include <cctype>
#include "PhoneBook.hpp"
#include "color.hpp"
#include <iostream>
#include	<string>

int main(void)
{
	PhoneBook	phonebook;
	std::string	read;

	std::cout << BHI_CYAN"please type ADD, SEARCH or EXIT" RESET <<std::endl;
	std::cout << BHI_YELLOW;
	std::getline(std::cin, read);
	std::cout << RESET;
	while (1)
	{
		if (std::cin.eof())
			return (1);
		else if (!read.compare("ADD"))
			phonebook.add_contact();
		else if (read == "SEARCH")
		{
			if (phonebook.get_size())
				phonebook.print_phonebook();
			else
				std::cout << B_RED"phonebook is empty" RESET <<std::endl;
		}
		else if (!read.compare("EXIT"))
			return (1);
		else
			std::cout << B_RED"invalid command" RESET <<std::endl;
		std::cout << BHI_CYAN"please type ADD, SEARCH or EXIT" RESET <<std::endl;
		std::cout << BHI_YELLOW;
		std::getline(std::cin, read);
		std::cout << RESET;
	}
		
}
