
#include "ScalarConverter.hpp"
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <limits>

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	*this = src;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const & src)
{
	(void)src;
	return (*this);
}

bool is_only_one_char(std::string s)
{
	char c = std::atoi(s.c_str());
	if (s[0] >= 32 && s[0] <= 126 && !s[1])
		return (true);
	return (false);
}

void ScalarConverter::convert(std::string n)
{
	long double nb = strtold(n.c_str(), NULL);
	char c = n[0];
	
	if (nb < std::numeric_limits<char>::min() || nb > std::numeric_limits<char>::max() || std::isnan(nb))
		std ::cout << "char : impossible\n";
	else if ((!std::isprint(nb) && !is_only_one_char(n)) || !(nb >= 32 && nb <= 126))
		std ::cout << "char : character non displayable\n";
	else if (is_only_one_char(n))
		std::cout << "char : " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char : " << static_cast<char>(nb) << std::endl;
	if ((nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max() || std::isnan(nb)) && !is_only_one_char(n))
		std ::cout << "int : impossible\n";
	else if (is_only_one_char(n))
		std::cout << "int : " << static_cast<int>(c) << std::endl;
	else
		std::cout << "int : " << static_cast<int>(nb) << std::endl;
	if ((std::abs(nb) < std::numeric_limits<float>::min() || std::abs(nb) > std::numeric_limits<float>::max()) && !is_only_one_char(n))
		std ::cout << "float : impossible\n";
	else if (is_only_one_char(n))
		std::cout << "float : " << static_cast<float>(c) << std::endl;
	else
		std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
	if (is_only_one_char(n))
		std::cout << "float : " << static_cast<float>(c) << std::endl;
	else
		std::cout << "double : " << static_cast<double>(nb) << std::endl;
}

