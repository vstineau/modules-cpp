#include <iostream>
#include "PmergeMe.hpp"
#include <algorithm>

void Pair::swap()
{
	int temp;
	temp = _a;
	_a = _b;
	_b = temp;
}

void Pair::setPair(int a, int b)
{
	_a = a;
	_b = b;
}

int Pair::getA() const
{
	return (_a);
}

int Pair::getB() const
{
	return (_b);
}

void sort_vector(std::vector<int> &vect)
{
	size_t size = vect.size();
	size % 2 ? size = size / 2 + 1 : size /= 2;
	Pair pairs[size];
	int j = 0;
	for (size_t i = 0; i < size; i++)
	{
		pairs[i].setPair(vect[j], vect[j + 1]);
		j += 2;
	}
	for (size_t i = 0; i < size; i++)
		pairs[i].getA() < pairs[i].getB() ? pairs[i].swap(): (void)i;
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "pair nb " << i << std::endl;
		std::cout << pairs[i].getA() << pairs[i].getB() << std::endl;
	}
}
