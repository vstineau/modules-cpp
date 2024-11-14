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

void merge(std::vector<int> &big, int left, int middle, int right)
{
	int l1 = middle - left + 1;
	int l2 = right - middle;

	std::vector<int> Left(l1);
	std::vector<int> Right(l2);

	for (int i = 0; i < l1; i++)
		Left[i] = big[left + i];
	for (int i = 0; i < l2; i++)
		Right[i] = big[middle + 1 + i];
	int i = 0;
	int j = 0;
	int k = left;

	while (i < l1 && j < l2)
	{
		if (Left[i] <= Right[j])
			big[k] = Left[i++];
		else
			big[k] = Right[j++];
		k++;
	}
	while (i < l1)
		big[k++] = Left[i++];
	while (i < l2)
		big[k++] = Left[j++];
}

void merge_sort(std::vector<int> &big, int left, int right)
{
	//use merge sort to sort the big vector
	if (left >= right)
		return ;
	int middle = left + (right - left) / 2;
	merge_sort(big, left, middle);
	merge_sort(big, middle + 1, right);
	merge(big, left, middle, right);
}

void insert_value(std::vector<int> &big,std::vector<int> &small)
{
	//insert small value in sorted big vector with binary search
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
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
		it->first < it->second ? std::swap(it->first, it->second): (void)it;
	std::vector<int> big;
	std::vector<int> small;
	std::vector<int> jacob;
	for (size_t i = 0; i < size; i++)
		jacob.push_back(i);
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		big.push_back(it->first);
		small.push_back(it->second);
	}
	std::cout << "big : ";
	for (std::vector<int>::iterator it = big.begin(); it != big.end(); it++)
		std::cout << *it << " ";
	std::cout << "\n";
	merge_sort(big, 0, big.size() - 1);
	std::cout << "big : ";
	for (std::vector<int>::iterator it = big.begin(); it != big.end(); it++)
		std::cout << *it << " ";
	std::cout << "\n";
	insert_value(big, small);
	if (odd)
		;//insert last with binary search
}
