
#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
	try {
	{
		Array<int> test(5);

		test[0] = 1;
		test[1] = 2;
		test[2] = 3;
		test[3] = 4;
		test[4] = 5;

		std::cout << test[0] << test[1] << test[2] << test[3] << test[4] << std::endl;
	}
	{
		Array<std::string> test(5);

		test[0] = "un ";
		test[1] = "deux ";
		test[2] = "trois ";
		test[3] = "quatre ";
		test[4] = "cinq ";

		std::cout << test[0] << test[1] << test[2] << test[3] << test[4] << std::endl;
	}
	{
		Array<std::string> test(1);

		test[0] = "un ";
		test[1] = "deux ";
		test[2] = "trois ";
		test[3] = "quatre ";
		test[4] = "cinq ";

		std::cout << test[0] << test[1] << test[2] << test[3] << test[4] << std::endl;
	} }
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}
