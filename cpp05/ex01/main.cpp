#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat numero1("numero1", 10);
	Bureaucrat numero2("numero2", 2);
	Bureaucrat numero3("numero3", 7);
	Form papier1("papier1", 2, 2);
	Form papier2("papier2", 6, 11);
	numero1.signForm(papier1);
	numero2.signForm(papier1);
	numero3.signForm(papier2);
	numero2.signForm(papier2);
}
