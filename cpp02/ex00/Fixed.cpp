
#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed():_value(0)
{
	std::cout << "Default constructeur called" << std ::endl;
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
	std::cout << "getRawBits member function called" << std ::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std ::endl;
	this->_value = raw;
}
