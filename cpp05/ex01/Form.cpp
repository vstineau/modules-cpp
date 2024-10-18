
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form(): _name("name"), _signed(false), _gradeToSign(0), _gradeToExecute(0)
{}

Form::Form(std::string name, unsigned int gts, unsigned int gte): _name(name),
																																	_signed(false),
																																	_gradeToSign(gts),
																																	_gradeToExecute(gte)
{
	if (gts < 1 || gte < 1)
		throw GradeTooHighException();
	if (gts > 150 || gte > 150)
		throw GradeTooLowException();
	std::cout << "a new Form has been created\n";
}

Form::~Form()
{}

Form::Form(Form const & src): _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
}

Form& Form::operator=(Form const & src)
{
	(void)src;
	return (*this);
}

std::string const Form::getName() const
{
	return (this->_name);
}

unsigned int Form::getGte() const
{
	return (this->_gradeToSign);
}

unsigned int Form::getGts() const
{
	return (this->_gradeToExecute);
}

bool Form::getStatus() const
{
	return (this->_signed);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	else
	{
		std::cout << "Form " << this->_name << " has been signed by " << bureaucrat.getName() << std::endl;
		this->_signed = true;
	}
}

std::ostream & operator<<(std::ostream & o, Form const & i)
{
	if (i.getStatus())
		o << i.getName() << " form need a grade " << i.getGts() << " to be signed and grade "<< i.getGte() << " to be executed, form is actually signed"<< std::endl;
	else
		o << i.getName() << " form need a grade " << i.getGts() << " to be signed and grade "<< i.getGte() << " to be executed, form is actually not signed"<< std::endl;
	return (o);
}
