#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default"), _signed(0), signGrade(150), executeGrade(5)
{}
AForm::AForm(std::string newName, int signG, int executeG) : name(newName), _signed(0), signGrade(signG), executeGrade(executeG)
{
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
	
}
AForm::AForm(const AForm& original) : name(original.name), _signed(original._signed), signGrade(original.signGrade), executeGrade(original.executeGrade){}
AForm& AForm::operator=(const AForm& original)
{
	_signed = original._signed;
	return *this;
}

const char* AForm::GradeTooHighException:: what() const throw()
{
	return "Grade is too high!";
}

const char* AForm::GradeTooLowException:: what() const throw()
{
	return "Grade is too low!";
}

std::string AForm::getName() const
{
	return (name);
}

int AForm::getSignGrade() const
{
	return (signGrade);
}

int AForm::getexecGrade() const
{
	return (executeGrade);
}

void AForm::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() > getSignGrade())
		throw GradeTooLowException();
	_signed = 1;
	return ;
}

bool AForm::getSigned() const
{
	return _signed;
}

std::ostream& operator<<(std::ostream& COUT, const AForm& myobj)
{
	COUT << myobj.getName() << ", Sign grade: " << myobj.getSignGrade()
	<< " Signature AForm: " << myobj.getSigned() << " execute Grade: " << myobj.getexecGrade() << '\n';
	return COUT;
}

AForm::~AForm(){}

