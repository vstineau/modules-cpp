#include "Harl.hpp"
#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "invalid argument number" << std::endl;
		return (1);
	}
	Harl harl;
	int level = 0;
	std::string arg = argv[1];
	if (arg != "DEBUG" && arg != "INFO" && arg != "WARNING" && arg != "ERROR")
	{
		std::cout << "invalid argument" << std::endl;
		 return (1);
	}
	const std::string message[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (arg == message[i])
			level = i + 1;
	}
	switch (level)
	{
		case 1:
			harl.complain("debug");
		case 2:
			harl.complain("info");
		case 3:
			harl.complain("warning");
		case 4:
			harl.complain("error");
	}
}
