#pragma once
#include "AForm.hpp"
#include "fstream"

class ShrubberyCreationForm : public AForm
{
  private:
      std::string myTarget;
  public:
      ShrubberyCreationForm();
      ShrubberyCreationForm(std::string target);
      ShrubberyCreationForm(const ShrubberyCreationForm& original);
      ShrubberyCreationForm& operator=(const ShrubberyCreationForm& original);
      void execute(Bureaucrat const & executor) const;
      class notSigned : public std::exception
      {
          public:
            const char *what() const throw();
      };
      ~ShrubberyCreationForm();
};


