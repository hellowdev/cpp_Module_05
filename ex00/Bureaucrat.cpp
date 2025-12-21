#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){}

Bureaucrat::Bureaucrat(std::string newName, int in_grade) : name(newName)
{
    if (in_grade < 1)
        throw GradeTooHighException();
    if (in_grade > 150)
        throw GradeTooLowException();
    this->grade = in_grade;
}

std::out_of_range Bureaucrat::GradeTooHighException()
{
    return std::out_of_range("too High range");
}
std::out_of_range Bureaucrat::GradeTooLowException()
{
    return std::out_of_range("too low range");
}

std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade()
{
    return (grade);
}

void Bureaucrat::betterGrade()
{
    if (grade - 1 < 1)
        throw std::out_of_range("too High range");
    grade--;
}

void Bureaucrat::worseGrade()
{
    if (grade + 1 > 150)
        throw std::out_of_range("too Low range");
    grade++;
}

Bureaucrat::~Bureaucrat(){}
