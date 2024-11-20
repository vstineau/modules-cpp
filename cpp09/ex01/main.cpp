
#include "RPN.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error: invalid number argument\n";
		return (1);
	}
	std::string operation = argv[1];
	if (check_error(operation))
		return (1);
	calculate(operation);
}
