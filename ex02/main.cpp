#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
   
    try
    {
        std::cout << "--------TEST SHRUBBERY------------\n";
        Bureaucrat burr("burr", 137);
        ShrubberyCreationForm shrub("myshrub");
        
        shrub.beSigned(burr);
        burr.executeForm(shrub);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "------TEST ROBOT------------\n";
        Bureaucrat burr("burr", 45);
        RobotomyRequestForm robot("myRobot");
        
        robot.beSigned(burr);
        burr.executeForm(robot);
        robot.execute(burr);
        robot.execute(burr);
        robot.execute(burr);

    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "------TEST PRESIDENT------------\n";
        Bureaucrat burr("burr", 5);
        PresidentialPardonForm pres("myPresident");
        pres.beSigned(burr);
        burr.executeForm(pres);
        Bureaucrat burr2("burr", 10);
        burr2.executeForm(pres);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    
    
}
