/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstineau </var/spool/mail/vstineau>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:08:42 by vstineau          #+#    #+#             */
/*   Updated: 2024/10/23 16:50:23 by vstineau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5, target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): AForm(src)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	(void)src;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat &bureaucrat) const
{
	if (this->_signed == false)
	{
		std::cout << "can't execute Form not signed\n";
		return ;
	}
	if (bureaucrat.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblerox" << std::endl;
}
