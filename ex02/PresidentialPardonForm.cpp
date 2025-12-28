#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential",  25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", 25, 5), myTarget(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& original) : AForm(original), myTarget(original.myTarget)
{
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& original)
{
  AForm::operator=(original);
  myTarget = original.myTarget;
  return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{   
    if (!getSigned())
      throw notSigned();
    else if (getexecGrade() < executor.getGrade())
      throw GradeTooLowException();
    std::cout << myTarget << " has been pardoned by Zaphod Beeblebrox\n";
}

const char *PresidentialPardonForm::notSigned::what() const throw()
{
  return "Presidential Form Not Signed!";
}
PresidentialPardonForm::~PresidentialPardonForm()
{}