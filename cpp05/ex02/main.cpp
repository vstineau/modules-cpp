#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat numero1("numero1", 10);
	Bureaucrat numero2("numero2", 2);
	Bureaucrat numero3("numero3", 7);
	ShrubberyCreationForm papier1("home");
	numero1.signForm(papier1);
	papier1.execute(numero1);
}
