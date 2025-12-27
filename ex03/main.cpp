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
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy  request", "Bender");
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        (void)rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}
