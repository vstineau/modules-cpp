
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
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

