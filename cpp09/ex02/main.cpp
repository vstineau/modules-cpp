#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <ctime>
#include "PmergeMe.hpp"
#include <vector>
#include <deque>
#include <set>


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
	std::set<int> set;
	for (int i = 1; argv[i] != 0; i++)
	{
		if (set.count(atoi(argv[i])))
			return (std::cerr << "Error: twice same number\n", 1);
		set.insert(atoi(argv[i]));
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
	t_time v;
	t_time d;
	for (int i = 1; argv[i] != 0; i++)
		vect.push_back(atoi(argv[i]));
	v.start = std::clock();
	v.end  = sort<std::vector<int>, std::vector<std::pair<int, int> > >(vect);
	std::deque<int>	dq;
	for (int i = 1; argv[i] != 0; i++)
		dq.push_back(atoi(argv[i]));
	d.start = std::clock();
	d.end  = sort<std::deque<int>, std::deque<std::pair<int, int> > >(dq);
	std::cout << "After : ";
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of 3000 elements with std::vector : ";
	std::cout << std::fixed << std::setprecision(5);
	std::cout << 1000.0 * (v.end - v.start) / CLOCKS_PER_SEC << "ms\n";
	std::cout << "Time to process a range of 3000 elements with std::deque : ";
	std::cout << std::fixed << std::setprecision(5);
	std::cout << 1000.0 * (d.end - d.start) / CLOCKS_PER_SEC << "ms\n";
//	if (!std::is_sorted(vect.begin(), vect.end()) || !std::is_sorted(dq.begin(), dq.end()))
//		std::cout << "not sorted\n";
}
