#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
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
        std::string getName() const;
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
        void signForm(Bureaucrat& burr, Form &form);
        void betterGrade();
        void worseGrade();
        void check(Bureaucrat& burr, Form &obj);
    ~Bureaucrat();
};

std::ostream& operator<<(std::ostream& COUT, const Bureaucrat& myobj);
#endif
