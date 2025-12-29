#include "Bureaucrat.hpp"


int main()
{
    try
    {
        std::cout << "Valid One\n";
        Bureaucrat burr("burreauc", 10);
        Form form("form", 10, 20);
        burr.signForm(form);
        std::cout << form << '\n';
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Invalid One\n";
        Bureaucrat burr("burreauc", 11);
        Form form("form", 10, 20);
        burr.signForm(form);
        std::cout << form << '\n';
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    
}
