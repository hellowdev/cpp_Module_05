#pragma once
#include <iostream>
class Bureaucrat;

class Form
{
    private:
        const std::string   name;
        bool                _signed;
        const int           signGrade;
        const int           executeGrade;
    public:
        Form();
        Form(std::string newName, int signG, int executeG);
        Form(const Form& original);
        Form& operator=(const Form& original); // Only copies _signed status   
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
        int getSignGrade() const;
        int getexecGrade() const;
        std::string getName() const;
        void beSigned(Bureaucrat& obj);
    ~Form();
};

// std::ostream& operator<<(std::ostream& COUT, const Bureaucrat& myobj);