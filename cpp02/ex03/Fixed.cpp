
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed():_value(0)
{
}

Fixed::Fixed(int const value)
{
	_value = value << _mantissa;
}

Fixed::Fixed(float const value)
{
	_value = roundf(value * (1 << _mantissa));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& src)
{
	*this = src;
	return ;
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return (_value / (float)(1 << _mantissa));
}

int Fixed::toInt(void) const
{
	int intvalue = (_value >> _mantissa);
	return (intvalue);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
