#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("idk", 145, 137), myTarget(target)
{
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw notSigned();
	else if (getexecGrade() < executor.getGrade())
		throw GradeTooLowException();
	
	std::ofstream outfile((myTarget + "_shrubbery").c_str());
	if (!outfile)
	{
		std::cerr << "no permission in the file\n";
		return ;
	}
	outfile << "hello\n";
}

const char *ShrubberyCreationForm::notSigned::what() const throw()
{
    return "Form Not Signed!";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}