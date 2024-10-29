#include "template.hpp"
#include <iostream>

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "swap c and  d\n";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

//int main(void)
//{
//	int x = 0;
//	int y = 42;
//	float a = 10.877f;
//	float b = 42.4242f;
//
//	std::cout << "max between x :" << x << " and y : " << y << " is " <<max<int>(x, y) << std::endl;
//	std::cout << "min between a :" << a << " and b : " << b << " is " <<min<float>(a, b) << std::endl;
//	std::cout << "swap between x and y\n";
//	swap<int>(x, y);
//	std::cout << "x = " << x << " y = " << y << std::endl;
//}
