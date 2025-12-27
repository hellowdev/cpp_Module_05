#pragma once
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{

  public:
    Intern();
    Intern(const Intern& original);
    Intern& operator=(const Intern& original);
    AForm* makeForm(std::string formName, std::string formTarget);
    AForm *myRobot(std::string target);
    AForm *myShrubbery(std::string target);
    AForm *myPresident(std::string target);
    
    ~Intern();
};


