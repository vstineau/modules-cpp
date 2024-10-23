
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
	{
		this->_grade = grade;
		std::cout << "a new Bureaucrat is ready to work\n";
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat died\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src._name), _grade(src._grade)
{
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & src)
{
	(void)src;
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error grade is too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error grade is too low\n");
}

std::string const Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::upgrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
	{
		this->_grade--;
		std::cout << this->_name << " got promoted\n";
	}
}

void Bureaucrat::downgrade()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	else
	{
		this->_grade++;
		std::cout << this->_name << " got promoted\n";
	}
}

void Bureaucrat::signForm(AForm &form)
{
//	if (form.getStatus())
//	{
//		std::cout << form.getName() << " is already signed\n";
//		return;
//	}
	try {
		form.beSigned(*this);
	}
	catch(std::exception & e) {
		std::cerr << this->_name << " couldn't sign " << form.getName() << " because " << e.what();
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try {
		form.execute(*this);
	}
	catch (std::exception &e) {
		std::cout << "can't execute because " << e.what();
	}
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return (o);
}
