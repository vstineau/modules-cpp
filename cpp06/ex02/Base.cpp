
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base::~Base(){}

int rand3(void)
{
	return (std::rand() % 3);
}
Base *generate(void)
{
	int choice = rand3();
	switch (choice)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void identify(Base *p)
{
	std::cout << "identify * \n";
	if (dynamic_cast<A*>(p))
		std::cout << "Type is A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Type is B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Type is C\n";
}

void identify(Base &p)
{
	std::cout << "identify & \n";
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Type is A\n";
	}
	catch (std::exception &e)
	{
		try
		{
			B b = dynamic_cast<B&>(p);
			std::cout << "Type is B\n";
		}
		catch (std::exception &e)
		{
			try
			{
				C c = dynamic_cast<C&>(p);
				std::cout << "Type is C\n";
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << "Unknown type" << std::endl;
			}
		}
	}
}
