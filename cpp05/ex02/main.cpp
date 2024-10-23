#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(NULL));
	Bureaucrat numero1("numero1", 131);
	Bureaucrat numero2("numero2", 2);
	Bureaucrat numero3("numero3", 1);
	ShrubberyCreationForm papier1("home");
	RobotomyRequestForm papier2("timmy");
	PresidentialPardonForm papier3("stan");
	numero1.signForm(papier1);
	numero1.executeForm(papier1);
	numero2.signForm(papier2);
	papier2.execute(numero2);
	numero3.signForm(papier3);
	papier3.execute(numero3);
}
