#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){}

Bureaucrat::Bureaucrat(const std::string newName, int in_grade) : name(newName)
{
    if (in_grade < 1)
        throw GradeTooHighException();
    if (in_grade > 150)
        throw GradeTooLowException();
    this->grade = in_grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat& original) : name(original.name), grade(original.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& original)
{
    if (this != &original)
        this->grade = original.grade;
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
    return "Grade is too low!";
}

std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void Bureaucrat::betterGrade()
{
    if (grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::worseGrade()
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}

std::ostream& operator<<(std::ostream& COUT, const Bureaucrat& myobj)
{
    COUT << myobj.getName() << ", bureaucrat grade " << myobj.getGrade() << '\n';
    return COUT;
}

Bureaucrat::~Bureaucrat(){}
