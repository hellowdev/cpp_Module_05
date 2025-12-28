#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& original)
{
  *this = original;
}

Intern& Intern::operator=(const Intern& original)
{
    (void)original;
    return *this;
}

AForm *Intern::myRobot(std::string target)
{
    AForm *ab = new RobotomyRequestForm(target);
    std::cout << "Intern creates " << ab->getName() << '\n';
    return ab;
}

AForm *Intern::myShrubbery(std::string target)
{
    AForm *ab = new ShrubberyCreationForm(target);
    std::cout << "Intern creates " << ab->getName() << '\n';
    return ab;
}

AForm *Intern::myPresident(std::string target)
{
    AForm *ab = new PresidentialPardonForm(target);
    std::cout << "Intern creates " << ab->getName() << '\n';
    return ab;
}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
    AForm* (Intern::*x[3])(std::string);
    std::string arr[3];
  
    x[0] = &Intern::myPresident;
    x[1] = &Intern::myShrubbery;
    x[2] = &Intern::myRobot;
    arr[0] = "presidential pardon";
    arr[1] = "shrubbery creation";
    arr[2] = "robotomy request";
    int i = 0;
    while (i < 3 && arr[i] != formName)
        i++;
    switch (i)
    {
        case 0:
          return (this->*x[0])(formTarget);
        case 1:
          return (this->*x[1])(formTarget);
        case 2:
          return (this->*x[2])(formTarget);
        default :
          std::cerr << "Invalid Form Name\n";
          return NULL;
    }
}


Intern::~Intern(){}