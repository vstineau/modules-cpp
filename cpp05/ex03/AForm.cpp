
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm(): _name("name"), _signed(false), _gradeToSign(0), _gradeToExecute(0)
{}

AForm::AForm(std::string name, unsigned int gts, unsigned int gte, std::string target):
	_name(name),
	_signed(false),
	_gradeToSign(gts),
	_gradeToExecute(gte),
	_target(target)
{
	if (gts < 1 || gte < 1)
		throw GradeTooHighException();
	if (gts > 150 || gte > 150)
		throw GradeTooLowException();
	std::cout << "a new AForm has been created\n";
}

AForm::~AForm()
{}

AForm::AForm(AForm const & src):
	_name(src._name),
	_signed(src._signed),
	_gradeToSign(src._gradeToSign),
	_gradeToExecute(src._gradeToExecute),
	_target(src._target)
{
}

AForm& AForm::operator=(AForm const & src)
{
	(void)src;
	return (*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return (" grade is too high\n");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return (" grade is too low\n");
}

std::string const AForm::getName() const
{
	return (this->_name);
}

unsigned int AForm::getGte() const
{
	return (this->_gradeToSign);
}

unsigned int AForm::getGts() const
{
	return (this->_gradeToExecute);
}

bool AForm::getStatus() const
{
	return (this->_signed);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	else
	{
		std::cout << "AForm " << this->_name << " has been signed by " << bureaucrat.getName() << std::endl;
		this->_signed = true;
	}
}

std::ostream & operator<<(std::ostream & o, AForm const & i)
{
	if (i.getStatus())
		o << i.getName() << " form need a grade " << i.getGts() << " to be signed and grade "<< i.getGte() << " to be executed, form is signed"<< std::endl;
	else
		o << i.getName() << " form need a grade " << i.getGts() << " to be signed and grade "<< i.getGte() << " to be executed, form is not signed"<< std::endl;
	return (o);
}
