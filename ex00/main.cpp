#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat x;
    try
    {
        x.betterGrade();
    }
    catch (std::exception & e)
    {
        
    }
    std::cout << x.getGrade() << '\n';
}
