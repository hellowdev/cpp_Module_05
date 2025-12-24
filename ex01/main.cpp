#include "Bureaucrat.hpp"


int main()
{
    // try
    // {
    //     Bureaucrat b("Bureaucrat", 4);
    //     Bureaucrat a("buurr", 4);
    //     Form x("form", 5, 2);
    //     b.signForm(x);
    //     a.signForm(x);
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // try
    // {
    //     Form x("form", 5, 2);
    //     std::cout << x;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    try
    {
        std::cout << "SIGN WITH DEFAULT\n";
        Bureaucrat t("burre", 20);
        Form b("Form", 10, 15);
        b.beSigned(t);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    
}
