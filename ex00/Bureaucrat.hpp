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
        Bureaucrat(std::string newName, int in_grade);
        std::string getName() const;
        int getGrade();
        std::out_of_range GradeTooHighException();
        std::out_of_range GradeTooLowException();
        void betterGrade();
        void worseGrade();
        ~Bureaucrat();

};
#endif
