#pragma once
#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
  private:
    std::string myTarget;
  public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& original);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& original);
    void execute(Bureaucrat const & executor) const;
    class notSigned : public std::exception
      {
          public:
            const char *what() const throw();
      };
    ~PresidentialPardonForm();
};