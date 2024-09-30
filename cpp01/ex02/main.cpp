
#include <string>
#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "adress of brain:     " << &brain << std::endl;
	std::cout << "adress in stringPTR: " << stringPTR << std::endl;
	std::cout << "adress in stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "brain:     " << brain << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}
