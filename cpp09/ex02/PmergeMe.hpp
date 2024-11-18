#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <ctime>
#include <iostream>

typedef struct s_time
{
	std::clock_t start;
	std::clock_t end;
} t_time;

template <typename C>
void merge(C &big, int left, int middle, int right)
{
	int l1 = middle - left + 1;
	int l2 = right - middle;

	C Left(l1);
	C Right(l2);

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

template <typename C>
void merge_sort(C &big, int left, int right)
{
	//use merge sort to sort the big vector
	if (left >= right)
		return ;
	int middle = left + (right - left) / 2;
	merge_sort(big, left, middle);
	merge_sort(big, middle + 1, right);
	merge(big, left, middle, right);
}

template <typename C>
void insert_value(C &big, C &small)
{
	(void)big;
	(void)small;
}

template <typename C, typename P>
std::clock_t sort(C &cont)
{
	size_t size = cont.size();
	bool odd = cont.size() % 2;
	int last = 0;
	if (odd)
		last = cont[size - 1];
	size /= 2;
	P pairs;
	int j = 0;
	for (size_t i = 0; i < size; i++)
	{
		pairs.push_back(std::make_pair(cont[j], cont[j + 1]));
		j += 2;
	}
	for (typename P::iterator it = pairs.begin(); it != pairs.end(); it++)
		it->first < it->second ? std::swap(it->first, it->second): (void)it;
	C big;
	C small;
	C jacob;
	for (size_t i = 0; i < size; i++)
		jacob.push_back(i);
	for (typename P::iterator it = pairs.begin(); it < pairs.end(); it++)
	{
		big.push_back(it->first);
		small.push_back(it->second);
	}
	std::cout << "small : ";
	for (typename C::iterator it = small.begin(); it != small.end(); it++)
		std::cout << *it << " ";
	std::cout << "\n";
	std::cout << "big before sort: ";
	for (typename C::iterator it = big.begin(); it != big.end(); it++)
		std::cout << *it << " ";
	std::cout << "\n";
	merge_sort(big, 0, big.size() - 1);
	std::cout << "big after sort before insertion: ";
	for (typename C::iterator it = big.begin(); it != big.end(); it++)
		std::cout << *it << " ";
	std::cout << "\n";
	insert_value(big, small);
	if (odd)
		(void)last;//insert last with binary search
	return (std::clock());
}

#endif
