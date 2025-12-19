#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::srand(time(NULL));
    grade = (std::rand() % 20) + 1;
    if (grade < 1)
        GradeTooHighException();
    else if (grade > 150)
        GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string newName) : name(newName)
{
    std::srand(time(NULL));
    grade = (std::rand() % 20) + 1;
    if (grade < 1)
        GradeTooHighException();
    else if (grade > 150)
        GradeTooLowException();
}

void Bureaucrat::GradeTooHighException()
{
    throw "Too High\n";
}
void Bureaucrat::GradeTooLowException()
{
    throw "Too Low\n";
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
    grade--;
}

void Bureaucrat::worseGrade()
{
    grade++;
}

Bureaucrat::~Bureaucrat(){}
