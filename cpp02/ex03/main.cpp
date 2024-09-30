#include <iostream>
#include "Point.hpp"

//int main( void )
//{
//	Point a(12.0f, 3.0f);
//	Point b(-12.0f, -3.0f);
//	Point c(1.0f, 2.0f);
//	Point d(1.0f, 2.0f);
//	if (bsp(a, b, c, d))
//		std::cout << "d is in triangle abc" << std::endl;
//	else
//		std::cout << "d is not in triangle abc" << std::endl;
//}

//int main( void )
//{
//	Point a(12.0f, 3.0f);
//	Point b(-12.0f, -3.0f);
//	Point c(1.0f, 2.0f);
//	Point d(1.0f, 1.0f);
//	if (bsp(a, b, c, d))
//		std::cout << "d is in triangle abc" << std::endl;
//	else
//		std::cout << "d is not in triangle abc" << std::endl;
//}

//int main( void )
//{
//	Point a(12.0f, 0.0f);
//	Point b(10.0f, 0.0f);
//	Point c(1.0f, 2.0f);
//	Point d(-5.0f, 0.0f);
//	if (bsp(a, b, c, d))
//		std::cout << "d is in triangle abc" << std::endl;
//	else
//		std::cout << "d is not in triangle abc" << std::endl;
//}

int main( void )
{
	Point a(12.50f, 0.60f);
	Point b(10.0f, 0.770f);
	Point c(1.0f, 2.670f);
	Point d(-15.0f, 0.670f);
	if (bsp(a, b, c, d))
		std::cout << "d is in triangle abc" << std::endl;
	else
		std::cout << "d is not in triangle abc" << std::endl;
}
