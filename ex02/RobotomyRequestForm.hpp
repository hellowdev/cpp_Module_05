#pragma once
#include "AForm.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm
{
  private:
    std::string myTarget;
  public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& original);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& original);
    void execute(Bureaucrat const & executor) const;
    class notSigned : public std::exception
      {
          public:
            const char *what() const throw();
      };
    ~RobotomyRequestForm();
};
