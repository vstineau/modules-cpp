
#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	_complain[0].f = &Harl::debug;
	_complain[0]._level = "debug";
	_complain[1].f = &Harl::info;
	_complain[1]._level = "info";
	_complain[2].f = &Harl::warning;
	_complain[2]._level = "warning";
	_complain[3].f = &Harl::error;
	_complain[3]._level = "error";
}

Harl::~Harl()
{}

void	Harl::complain(std::string level)
{
	for (int index = 0; index < 4; index++)
	{
		if (this->_complain[index]._level == level)
		{
			(this->*_complain[index].f)();
			return ;
		}
	}
}

void	Harl::debug()
{
	std::cout << "this is a debug level message" << std::endl;
}

void	Harl::info()
{
	std::cout << "this is a info level message" << std::endl;
}

void	Harl::warning()
{
	std::cout << "this is a warning level message" << std::endl;
}

void	Harl::error()
{
	std::cout << "this is a error level message" << std::endl;
}
