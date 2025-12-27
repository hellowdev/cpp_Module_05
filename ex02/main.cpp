#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat b("Burr", 1);
        
        // ShrubberyCreationForm sh("mytargetFile");
        // std::cout << sh.getSigned() << '\n';
        // ShrubberyCreationForm be(sh);
        // b.signForm(be);
        // std::cout << sh.getSigned() << '\n';
        // sh = be;
        // std::cout << sh.getSigned() << '\n';
        // sh.execute(b);
        
        ShrubberyCreationForm sh("alice");
        sh.beSigned(b);
        b.executeForm(sh);
        sh.execute(b);
        RobotomyRequestForm rob("robot");
        // rob.beSigned(b)
        PresidentialPardonForm pres("mr macron");
        // rob.beSigned(b);
        // rob.execute(b);
        // b.executeForm(sh);
        // b.executeForm(rob);
        // b.executeForm(pres);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    
}
