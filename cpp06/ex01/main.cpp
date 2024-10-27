#include "Serializer.hpp"
#include <cstddef>
#include <iostream>

int main(void)
{
	Data *ptr = new Data;
	Data *ptr2 = NULL;

	ptr->data = "truc";
	std::cout << "string in ptr is : " << ptr->data << std::endl;
	std::cout << "adress of ptr is : " << &ptr << std::endl;
	uintptr_t uintptr = Serializer::serialize(ptr);
	std::cout << "\n------------------------------------------------\n";
	std::cout << "value of uintptr is : " << uintptr << std::endl;
	std::cout << "adress of uintptr is : " << &uintptr << std::endl;
	std::cout << "\n------------------------------------------------\n";
	ptr2 = Serializer::deSerialize(uintptr);
	std::cout << "string in ptr2 is : " << ptr2->data << std::endl;
	std::cout << "adress of ptr2 is : " << &ptr2 << std::endl;
	delete ptr;
}
