#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> my_vector;
	my_vector.push_back(5);
	my_vector.push_back(1);
	my_vector.push_back(-2);
	my_vector.push_back(15);
	my_vector.push_back(42);
	my_vector.push_back(21);
	my_vector.push_back(2);
	my_vector.push_back(-15);
	try {
		std::cout << "search of the first itteration of 2\n";
		std::vector<int>::iterator ite = easyfind(my_vector, 2);
		std::cout << *ite << std::endl;
		std::cout << "search of the first itteration of -15\n";
		ite = easyfind(my_vector, -15);
		std::cout << *ite << std::endl;
		std::cout << "search of the first itteration of 232\n";
		ite = easyfind(my_vector, 232);
		std::cout << *ite << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "value not found in container\n";
	}

}
