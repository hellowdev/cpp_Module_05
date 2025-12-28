#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat br("burr", 1);
        Intern someRandomIntern;
        AForm* rrf;
    
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        rrf->beSigned(br);
        br.executeForm(*rrf);
        delete rrf;
        rrf = someRandomIntern.makeForm("presidential pardon", "Macron");
        rrf->beSigned(br);
        br.executeForm(*rrf);
        delete rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Home");
        rrf->beSigned(br);
        br.executeForm(*rrf);
        delete rrf;
        Bureaucrat br2("bar", 1);
        rrf = someRandomIntern.makeForm("shrubbery creation", "false");
        br2.executeForm(*rrf);
        rrf = someRandomIntern.makeForm("invalid request", "Bender");
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}
