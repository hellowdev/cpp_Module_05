#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137)
{}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137), myTarget(target)
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
	outfile << 	"       _-_\n"\
							"    /~~   ~~\\\n"
							" /~~         ~~\\\n"
							"{               }\n"
							" \\  _-     -_  /\n"
							"   ~  \\ //  ~\n"
							"_- -   | | _- _\n"
							"  _ -  | |   -_\n"
							"      // \\\\\n";
}

const char *ShrubberyCreationForm::notSigned::what() const throw()
{
    return "Shrubbery Form Not Signed!";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original) : AForm(original), myTarget(original.myTarget)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original)
{
	AForm::operator=(original);
	this->myTarget = original.myTarget;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}