#include <iostream>
#include "PmergeMe.hpp"

int Jacobsthal(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return Jacobsthal(n - 1) + 2 * Jacobsthal(n - 2);
}

void merge_sort(std::vector<int> &big, int start, int end)
{
	//use merge sort to sort the big vector
	(void)big;
	(void)start;
	(void)end;
}

void insert_value(std::vector<int> &big,std::vector<int> &small)
{
	//insert small value in sorted big vector with binary search
	(void)big;
	(void)small;
}

void sort_vector(std::vector<int> &vect)
{
	size_t size = vect.size();
	bool odd = vect.size() % 2;
	int last = 0;
	if (odd)
		last = vect[size - 1];
	size /= 2;
	std::vector<std::pair<int, int> > pairs(size);
	int j = 0;
	for (size_t i = 0; i < size; i++)
	{
		pairs.push_back(std::make_pair(vect[j], vect[j + 1]));
		j += 2;
	}
	for (size_t i = 0; i < size; i++)
		pairs[i].first < pairs[i].second ? std::swap(pairs[i].first, pairs[i].second): (void)i;

	std::vector<int> big;
	std::vector<int> small;
	std::vector<int> jacob;
	for (size_t i = 0; i < size; i++)
		jacob.push_back(i);
	for (size_t i = 0; i < size; i++)
	{
		big.push_back(pairs[i].first);
		small.push_back(pairs[i].second);
	}
	merge_sort(big, 0, big.size() - 1);
	insert_value(big, small);
	if (odd)
		;//insert last with binary search
}
