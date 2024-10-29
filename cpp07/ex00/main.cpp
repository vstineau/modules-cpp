#include "template.hpp"
#include <iostream>

int main(void)
{
	int x = 0;
	int y = 42;
	float a = 10.877f;
	float b = 42.4242f;

	std::cout << "max between x :" << x << " and y : " << y << " is " <<max<int>(x, y) << std::endl;
	std::cout << "min between a :" << a << " and b : " << b << " is " <<min<float>(a, b) << std::endl;
	std::cout << "swap between x and y\n";
	swap<int>(x, y);
	std::cout << "x = " << x << " y = " << y << std::endl;
}
