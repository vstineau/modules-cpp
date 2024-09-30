#include <iostream>
#include "Fixed.hpp"
#include "color.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(-50.2f);
	Fixed d(28);
	Fixed e(15.278f);
	Fixed f(0);
	Fixed g(2);
	Fixed zero(0);
	std::cout << BHI_YELLOW << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << RESET << std::endl;
	std::cout << BHI_MAGENTA << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << RESET << std::endl;
	std::cout << B_YELLOW "b = " << b << RESET << std::endl;
	std::cout << BHI_BLUE << "max between a :" << a << " and b :" << b << RESET << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << BHI_CYAN << "min between a :" << a << " and b :" << b << RESET << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	if (c < d)
		std::cout << BHI_GREEN << c << " is < to " << d << RESET << std::endl;
	if (d > e)
		std::cout << B_GREEN << d << " > " << e << RESET << std::endl;
	if (f >= zero)
		std::cout << B_MAGENTA << f << " >= " << zero << RESET << std::endl;
	if (f <= zero)
		std::cout << B_MAGENTA << f << " <= " << zero << RESET << std::endl;
	if (f == zero)
		std::cout << B_MAGENTA << f << " == " << zero << RESET << std::endl;
	if (d != zero)
		std::cout << BHI_MAGENTA << d << " != " << zero << RESET << std::endl;
	std::cout << BHI_RED << d << " + " << e << " = " << d + e << RESET << std::endl;
	std::cout << BHI_RED << d << " - " << e << " = " << d - e << RESET << std::endl;
	std::cout << BHI_RED << d << " * " << g << " = " << d * g << RESET << std::endl;
	std::cout << BHI_RED << d << " / " << g << " = " << d / g << RESET << std::endl;
	std::cout << BHI_RED << d << " / " << zero << " = " << d / zero << RESET << std::endl;
	return 0;
}
