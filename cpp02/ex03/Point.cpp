
#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::Point(float const x, float const y): _x(x), _y(y)
{
}

Point::~Point()
{}

Point::Point(Point const & src)
{
	*this = src;
}

Point& Point::operator=(Point const & src)
{
	(void)src;
	return (*this);
}

Fixed Point::getX()const
{
	return (this->_x);
}

Fixed Point::getY()const
{
	return (this->_y);
}
