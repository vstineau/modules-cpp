
#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45, target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): AForm(src)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	(void)src;
	return (*this);
}

int rand_0_100()
{
	return (std::rand() % 100);
}

void RobotomyRequestForm::execute(Bureaucrat &bureaucrat) const
{
	if (this->_signed == false)
	{
		std::cout << "can't execute Form not signed\n";
		return ;
	}
	if (bureaucrat.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	else
	{
		int i = rand_0_100();
		if (i < 50)
			std::cout << this->_target << " has successfully been robotomized\n";
		else
			std::cout << "robotomization failed on "<< this->_target << std::endl;
	}
}
