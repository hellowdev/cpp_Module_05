#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat b("burr", 6);
        Form x("form", 5, 2);
        b.signForm(b, x);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    
}
