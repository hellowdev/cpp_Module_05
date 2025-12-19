#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <cstdlib>
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string newName);
        std::string getName() const;
        int getGrade();
        void GradeTooHighException();
        void GradeTooLowException();
        void betterGrade();
        void worseGrade();
        ~Bureaucrat();

};
#endif
