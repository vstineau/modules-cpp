#include "iter.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

void switchupperlowercase(char &c)
{
	if (std::isalpha(c))
		c ^= (1 << 5);
}

int main(void)
{
	std::string s = "test";
	::iter(&s[0], s.length(), switchupperlowercase);
	std::cout << s << std::endl;
	std::string s1 = "TEST2";
	::iter(&s1[0], s1.length(), switchupperlowercase);
	std::cout << s1 << std::endl;
	std::string s2 = "tEsT3";
	::iter(&s2[0], s2.length(), switchupperlowercase);
	std::cout << s2 << std::endl;
}
