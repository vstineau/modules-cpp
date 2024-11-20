
#include "RPN.hpp"
#include <iostream>
#include <stack>
#include <cstdlib>
#include <limits>

static int is_not_number_or_operator(char c)
{
	if (!std::isdigit(c) && c != '-' && c != '+' && c != '/' && c != '*' && c != ' ')
		return (1);
	else
		return (0);
}

static int count_number_and_operator(std::string &op)
{
	size_t nb_count = 0;
	size_t op_count = 0;
	for (std::string::iterator it = op.begin(); it != op.end(); it++)
	{
		if (std::isdigit(*it))
			nb_count++;
		if (*it == '-' || *it == '+' || *it == '/' || *it == '*')
			op_count++;
	}
	if (op_count + 1 != nb_count)
		return (1);
	return (0);
}

static int do_op(std::stack<int> &s, char c)
{
	long x;
	long y;

	if (s.size() < 2)
	{
		std::cerr << "Error: wrong number of operator or number\n";
		return (1);
	}
	x = s.top();
	s.pop();
	y = s.top();
	s.pop();
	switch (c)
	{
		case '+':
			if (y + x > std::numeric_limits<int>::max())
				return (std::cerr << "Error: result overflow\n",1);
			s.push(y + x);
			break;
		case '-':
			if (y - x < std::numeric_limits<int>::min())
				return (std::cerr << "Error: result overflow\n",1);
			s.push(y - x);
			break;
		case '/':
			if (x == 0)
				return (std::cerr << "Error: try to divide by 0\n",1);
			if (y - x < std::numeric_limits<int>::min())
				return (std::cerr << "Error: result overflow\n",1);
			s.push(y / x);
			break;
		case '*':
			if (y * x > std::numeric_limits<int>::max())
				return (std::cerr << "Error: result overflow\n",1);
			s.push(y * x);
			break;
	}
	return 0;
	
}

int check_error(std::string &op)
{
	for (std::string::iterator it = op.begin(); it != op.end(); it++)
	{
		if (is_not_number_or_operator(*it))
		{
			std::cerr << "Error: one of the argument is not a number or an operator\n";
			return (1);
		}
		if (count_number_and_operator(op))
		{
			std::cerr << "Error: invalid number of operator\n";
			return (1);
		}
	}
	return (0);
}

void calculate(std::string &op)
{
	std::stack<int> s;

	for (std::string::iterator it = op.begin(); it != op.end(); it++)
	{
		if (std::isdigit(*it))
			s.push(*it - '0');
		if (*it  == '+' || *it == '-' || *it == '/' || *it == '*')
		{
			if (do_op(s, *it))
				return ;
		}
	}
	std::cout << s.top() << std::endl;
}
