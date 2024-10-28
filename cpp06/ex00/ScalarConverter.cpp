
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

	if (j >= 32 && j <= 126 && !s[1])
		return (true);
	return (false);
}

bool isallnum(std::string s)
{
	int i = 0;

	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if (!std::isdigit(s[i]))
			return false;
		i++;
	}
	return true;
}

static void printDouble(std::string n)
{
	long double nb = strtold(n.c_str(), NULL);
	long double i = n[0];

	if (is_only_one_char(n))
		std::cout << "float : " << static_cast<float>(i) << std::endl;
	else
		std::cout << "double : " << static_cast<double>(nb) << std::endl;
}

static void printInt(std::string n)
{
	long double nb = strtold(n.c_str(), NULL);
	long double i = n[0];

	if ((nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max() || std::isnan(nb)) && !is_only_one_char(n))
		std ::cout << "int : impossible\n";
	else if (is_only_one_char(n))
		std::cout << "int : " << static_cast<int>(i) << std::endl;
	else
		std::cout << "int : " << static_cast<int>(nb) << std::endl;
}

static void printFloat(std::string n)
{
	long double nb = strtold(n.c_str(), NULL);
	long double i = n[0];

	if ((std::abs(nb) < std::numeric_limits<float>::min() || std::abs(nb) > std::numeric_limits<float>::max()) && !is_only_one_char(n))
		std ::cout << "float : impossible\n";
	else if (is_only_one_char(n))
		std::cout << "float : " << static_cast<float>(i) << std::endl;
	else
		std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
}

static void printChar(std::string n)
{
	int k = 0;
	long double nb = strtold(n.c_str(), NULL);
	while (n[k] == '0')
		k++;
	char c = n[k];
	if (nb < std::numeric_limits<char>::min() || nb > std::numeric_limits<char>::max() || std::isnan(nb))
		std ::cout << "char : impossible\n";
	else if ((isallnum(n) && (nb < 32 || nb > 126)) || n[0] == '-')
		std ::cout << "char : character non displayable\n";
	else if (is_only_one_char(n))
		std::cout << "char : " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char : " << static_cast<char>(nb) << std::endl;
}

void ScalarConverter::convert(std::string n)
{
	printChar(n);
	printInt(n);
	printFloat(n);
	printDouble(n);
}

