
#include "ScalarConverter.hpp"
#include <iostream>

int main(void)
{
	std::string nb = "42.01234f";
	std::string nb0 = "A";
	std::string nb1 = "0";
	std::string nb2 = "nan";
	std::string nb3 = "-inf";
	std::string nb4 = "+inf";
	std::string nb5 = "-12982938";
	std::string nb6 = "-12";

	ScalarConverter::convert(nb);
	std::cout << std::endl;
	ScalarConverter::convert(nb0);
	std::cout << std::endl;
	ScalarConverter::convert(nb1);
	std::cout << std::endl;
	ScalarConverter::convert(nb2);
	std::cout << std::endl;
	ScalarConverter::convert(nb3);
	std::cout << std::endl;
	ScalarConverter::convert(nb4);
	std::cout << std::endl;
	ScalarConverter::convert(nb5);
	std::cout << std::endl;
	ScalarConverter::convert(nb6);
}
