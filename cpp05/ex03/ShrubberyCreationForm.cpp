
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): AForm(src)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	(void)src;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat &bureaucrat) const
{
	if (this->_signed == false)
	{
		std::cout << "can't execute Form not signed\n";
		return ;
	}
	std::string file = bureaucrat.getName() + "_shruberry";
	if (bureaucrat.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	else
	{
		std::ofstream ofs(file.c_str());
		ofs << "  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣤⡾⠋⠷⣤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⡆⣠⡰⡞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⢿⠏⣿⠗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣤⣘⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⡿⠁⢉⣟⠛⢷⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣟⣹⠉⠀⠈⣿⣌⡏⠀⢈⣹⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⣿⡥⢤⣆⣀⣵⣄⣑⣦⢬⣽⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣾⣁⣬⣽⣶⠿⢋⡬⣍⠀⠻⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣜⣿⠟⠛⠉⢉⣅⠀⠀⢸⣢⣸⠇⠀⠈⢽⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⡩⡓⠁⠀⠈⣯⣈⡟⠀⠀⠀⠀⠀⠀⠀⠀⠉⣽⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡟⠟⣀⣠⠀⢉⡀⠁⢀⠀⠀⡀⠀⢠⣀⠈⢻⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢉⡿⠹⠷⠒⡿⠤⡖⠋⠓⠦⠽⠗⠺⠏⢻⡍⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⢠⣀⣠⢾⢷⣶⣤⣄⣀⣀⣀⣀⣀⣀⣀⣤⣴⣶⡾⠿⣦⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⢈⣿⢆⠅⠀⢀⣉⣉⠓⠛⠛⠛⠓⠒⡏⠉⠉⠀⠀⠀⠰⣿⡃⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⣤⡴⠞⠕⠁⠀⠀⢺⣿⣿⠆⠀⠀⠀⠐⡞⡙⡖⠀⠀⠀⠀⠀⠈⠛⠦⣤⡄⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠈⢛⣶⠞⢀⡀⠀⢀⠉⠁⠀⠀⠀⢀⠀⠋⠉⠃⠀⡀⠀⠀⣀⠘⢶⡞⠛⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⣤⡿⠻⠿⠒⠚⠿⠴⠖⣯⠤⠔⠋⠳⣤⣼⡖⠦⠽⠓⠒⠾⠿⠻⣇⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⢰⣞⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣻⡀⠀⠀⣠⠾⢧⠀⠀⠈⠙⢓⣶⠀⠀⠀⠀ \n";
		ofs << "⢠⡴⠶⠚⠋⠋⠁⠀⠀⠀⠀⠀⣴⠛⣦⠄⠀⠀⠀⣀⣀⠀⢻⣧⠀⠀⠻⣤⡼⠁⠀⠀⠀⠀⠉⠛⠲⢶⣤ \n";
		ofs << "⠀⠙⠓⢷⡶⠂⠀⠀⠀⠀⠀⠀⠸⠒⠗⠀⠀⠀⢸⡁⢈⡇⠈⢿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⢲⣖⠖⠛⠁ \n";
		ofs << "⠀⠀⠀⠾⠷⣶⣏⣀⣀⣤⠆⠀⡀⠀⠀⠀⢠⠀⢀⣩⡉⠀⣄⠀⠻⣷⣄⡀⠀⢦⣄⣀⣘⣷⣶⠿⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠉⠉⠉⠙⠛⠛⣿⣥⣤⠴⠾⠿⢾⡿⢿⣿⣷⠾⠗⢶⢬⣿⣿⠛⠚⠋⠉⠉⠉⠁⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠁⠀⠙⣿⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
		ofs << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠒⠒⠒⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n";
	}
}
