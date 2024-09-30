
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed():_value(0)
{
	std::cout << "Default constructeur called" << std ::endl;
}

Fixed::Fixed(int const value)
{
	_value = value << _mantissa;
	std::cout << "Int constructeur called" << std ::endl;
}

Fixed::Fixed(float const value)
{
	_value = roundf(value * (1 << _mantissa));
	std::cout << "Float constructeur called" << std ::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std ::endl;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructeur called" << std ::endl;
	*this = src;
	return ;
}

Fixed& Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignement operator called" << std ::endl;
	if (this !=  &src)
		this->_value = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std ::endl;
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
