#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat x("testName", 0);
        x.betterGrade();
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat x("NewName", 150);
        x.worseGrade();
    }
    catch (std::exception & k)
    {
        std::cerr << k.what() << '\n';
    }
    try
    {
        Bureaucrat x("idkName", 0);
    }
    catch(std::exception& b)
    {
        std::cerr << b.what() << '\n';
    }
}
