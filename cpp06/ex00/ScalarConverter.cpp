
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
	long double j = s[0];
	//std::cout << j << "\n";

	if (j >= 32 && j <= 126 && !s[1])
		return (true);
	return (false);
}

void ScalarConverter::convert(std::string n)
{
	int k = 0;
	long double nb = strtold(n.c_str(), NULL);
	while (n[k] == '0')
		k++;
	char c = n[k];
	long double i = n[0];
	
	if (nb < std::numeric_limits<char>::min() || nb > std::numeric_limits<char>::max() || std::isnan(nb))
		std ::cout << "char : impossible\n";
	else if (!std::isprint(c))//!is_only_one_char(n) || !(i >= 32 && i <= 126))
		std ::cout << "char : character non displayable\n";
	else if (is_only_one_char(n))
		std::cout << "char : " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char : " << static_cast<char>(nb) << std::endl;
	if ((nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max() || std::isnan(nb)) && !is_only_one_char(n))
		std ::cout << "int : impossible\n";
	else if (is_only_one_char(n))
		std::cout << "int : " << static_cast<int>(i) << std::endl;
	else
		std::cout << "int : " << static_cast<int>(nb) << std::endl;
	if ((std::abs(nb) < std::numeric_limits<float>::min() || std::abs(nb) > std::numeric_limits<float>::max()) && !is_only_one_char(n))
		std ::cout << "float : impossible\n";
	else if (is_only_one_char(n))
		std::cout << "float : " << static_cast<float>(i) << std::endl;
	else
		std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
	if (is_only_one_char(n))
		std::cout << "float : " << static_cast<float>(i) << std::endl;
	else
		std::cout << "double : " << static_cast<double>(nb) << std::endl;
}

