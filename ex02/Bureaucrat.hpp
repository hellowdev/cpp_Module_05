#pragma once
#include <iostream>
#include <cstdlib>
#include "AForm.hpp"

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& original);
        Bureaucrat& operator=(const Bureaucrat& original);
        Bureaucrat(std::string newName, int in_grade);
        class GradeTooHighException : public std::exception 
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception 
        {
            public:
                const char* what() const throw();
        };
        int getGrade() const;
        void signForm(AForm &form);
        std::string getName() const;
        void betterGrade();
        void worseGrade();
        void executeForm(AForm const & form) const;
    ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& COUT, const Bureaucrat& myobj);
