#include <iostream>
#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	try {
		srand(time(NULL));
		std::vector<int> newvect;
		for (int i = 0; i < 9995; i++)
			newvect.push_back(rand());
		Span sp = Span(10000);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addManyNumber(newvect);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}
