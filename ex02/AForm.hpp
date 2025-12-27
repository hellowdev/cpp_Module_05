#pragma once
#include <iostream>
class Bureaucrat;

class AForm
{
    private:
        const std::string   name;
        bool                _signed;
        const int           signGrade;
        const int           executeGrade;
    public:
        AForm();
        AForm(std::string newName, int signG, int executeG);
        AForm(const AForm& original);
        bool getSigned() const;
        AForm& operator=(const AForm& original);
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
        virtual void execute(Bureaucrat const & executor) const = 0;
    virtual ~AForm();
};

std::ostream& operator<<(std::ostream& COUT, const AForm& myobj);