#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robot", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robot", 72, 45), myTarget(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& original) : AForm(original), myTarget(original.myTarget)
{
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& original)
{
  AForm::operator=(original);
  myTarget = original.myTarget;
  return *this;
}

const char *RobotomyRequestForm::notSigned::what() const throw()
{
  return "Robot Form Not Signed!";
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{   
    static int n;
    if (!getSigned())
      throw notSigned();
    else if (getexecGrade() < executor.getGrade())
      throw GradeTooLowException();
    std::cout << "* drilling noises *\n";
    if (!n)
    {
        std::cout << myTarget << " has been robotomized successfully\n";
        n++;
    }
    else if (n == 1)
    {
        std::cout << "The robotomy failed\n";
        n = 0;
    }
}
RobotomyRequestForm::~RobotomyRequestForm()
{}