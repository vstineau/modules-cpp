
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern(Intern const & src)
{
	(void)src;
}

Intern& Intern::operator=(Intern const & src)
{
	(void)src;
	return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	const std::string formlist[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	int i = 0;
	AForm *form;

	for (;i < 3; i++)
		if (name == formlist[i])
			break;
	switch (i)
	{
		case 0:
		{
			form = new ShrubberyCreationForm(target);
			break;
		}
		case 1:
		{
			form = new RobotomyRequestForm(target);
			break;
		}
		case 2:
		{
			form = new PresidentialPardonForm(target);
			break;
		}
		case 3:
		{
			form = NULL;
			break;
		}
	}
	if (i == 3)
		std::cout << "Intern dosen't know the form " << name << std::endl;
	else
		std::cout << "Intern creates " << name << std::endl;
	return (form);
}
