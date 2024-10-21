#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat stan("stan", 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat steve("stan", 200);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat bobby("bobby", 12);
		std::cout << bobby;
		bobby.upgrade();
		std::cout << bobby;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat willy("willy", 1);
		std::cout << willy;
		willy.upgrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat timmy("timmy", 150);
		std::cout << timmy;
		timmy.downgrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
}
