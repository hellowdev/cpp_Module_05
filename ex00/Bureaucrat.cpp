#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::srand(time(NULL));
    grade = (std::rand() % ( 1 - 150)) + 1;
}
std::string Bureaucrat::getName() const
{
    return (name);
}
int Bureaucrat::getGrade()
{
    return (grade);
}
Bureaucrat::~Bureaucrat(){}
