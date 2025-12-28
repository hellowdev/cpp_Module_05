#pragma once
#include <iostream>
#include <cstdlib>
#include "Form.hpp"

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
        std::string getName() const;
        int getGrade() const;
        void signForm(Form &form);
        void betterGrade();
        void worseGrade();
    ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& COUT, const Bureaucrat& myobj);
