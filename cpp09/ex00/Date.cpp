
#include <iostream>
#include "Date.hpp"

static bool invalidDate(int y, int m, int d)
{
	if (y <= 0 || m <= 0 || d <= 0
	|| m > 12 || d > 31
	|| (y % 400 == 0 && y % 100 != 0 && y % 4 == 0 && m == 2 && d > 29)
	|| (m == 2 && d > 28 && (y % 400 != 0 && y % 100 != 0 && y % 4 != 0))
	|| (m == 2 && d > 29 && y % 400 == 0 && y % 100 != 0 && y % 4 == 0)
	|| (m == 4 && d > 30)
	|| (m == 6 && d > 30)
	|| (m == 9 && d > 30)
	|| (m == 11 && d > 30))
	{
		return true;
	}
	else
		return false;
}

Date::Date(): _year(0), _month(0), _day(0)
{}

Date::~Date()
{}

Date::Date(Date const & src): _year(src._year), _month(src._month), _day(src._day)
{}

Date& Date::operator=(Date const & src)
{
	if (this != &src)
	{
		_year = src._year;
		_month = src._month;
		_day = src._day;
	}
	return (*this);
}


int Date::checkDate() const
{
	if (invalidDate(_year, _month, _day))
	{
		std::cerr << "Error: invalid date\n";
		return (1);
	}
	return (0);
}

bool Date::operator==(Date const & src)
{
	if (_year == src._year && _month == src._month && _day == src._day)
		return (true);
	else
		return (false);
}

bool Date::operator<(Date const & src) const
{
	if (_year < src._year
	|| (_year == src._year && _month < src._month)
	|| (_year == src._year && _month == src._month && _day < src._day))
		return (true);
	else
		return (false);
}

std::ostream &operator<<(std::ostream &o, Date const &d)
{
	o << d._year << "-";
	d._month < 10 ? o << "0" <<d._month << "-" : o << d._month << "-";
	d._day < 10 ? o << "0" <<d._day : o << d._day;
	return (o);
}
