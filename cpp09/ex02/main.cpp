#include <iostream>
#include <cstdlib>
#include <limits>
#include "PmergeMe.hpp"

int check_error(int argc, char *argv[])
{
	if (argc < 3)
		return (std::cerr << "Error: invalid number of argument\n", 1);
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != 0; j++)
		{
			if (!isdigit(argv[i][j]))
				return (std::cerr << "Error: invalid argument, not a number\n", 1);
		}
		long temp = atol(argv[i]);
		if (temp > std::numeric_limits<int>::max() || temp < 0)
			return (std::cerr << "Error: invalid argument value\n", 1);
	}
	return (0);
}


int main(int argc, char *argv[])
{
	if (check_error(argc, argv))
		return (1);
	std::cout << "Before : ";
	for (int i = 1; i < argc; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
	std::vector<int> vect;
	for (int i = 1; argv[i] != 0; i++)
		vect.push_back(atoi(argv[i]));
	sort_vector(vect);
	std::deque<int>	dq;
	for (int i = 1; argv[i] != 0; i++)
		dq.push_back(atoi(argv[i]));
//	sort_deque(dq);
}
