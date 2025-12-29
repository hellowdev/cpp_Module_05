#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default"), _signed(0), signGrade(150), executeGrade(5)
{}
Form::Form(std::string newName, int signG, int executeG) : name(newName), _signed(0), signGrade(signG), executeGrade(executeG)
{
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& original) : name(original.name), _signed(original._signed), signGrade(original.signGrade), executeGrade(original.executeGrade){}
Form& Form::operator=(const Form& original)
{
	_signed = original._signed;
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

std::string Form::getName() const
{
	return (name);
}

int Form::getSignGrade() const
{
	return (signGrade);
}

int Form::getexecGrade() const
{
	return (executeGrade);
}

void Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() > getSignGrade())
		throw GradeTooLowException();
	_signed = 1;
	return ;
}

bool Form::getSigned() const
{
	return _signed;
}

std::ostream& operator<<(std::ostream& COUT, const Form& myobj)
{
	COUT << myobj.getName() << ", Sign grade: " << myobj.getSignGrade()
	<< ", Signature Form: " << myobj.getSigned() << ", Execute Grade: " << myobj.getexecGrade();
	return COUT;
}

Form::~Form(){}

