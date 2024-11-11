#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <limits>

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
	std::vector<int> vect;
	for (int i = 0; argv[i] != 0; i++)
		vect.push_back(atoi(argv[i]));
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
		std::cout << *it << std::endl;
	std::list<int>	list;
	for (int i = 0; argv[i] != 0; i++)
		list.push_back(atoi(argv[i]));
	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << std::endl;
}
