#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat x("BetterG", 1);
        x.betterGrade();
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat x("WorseG", 150);
        x.worseGrade();
    }
    catch (std::exception & k)
    {
        std::cerr << k.what() << '\n';
    }
    try
    {
        Bureaucrat x("ouofrange", 0);
    }
    catch(std::exception& b)
    {
        std::cerr << b.what() << '\n';
    }
    try
    {
        Bureaucrat t("valid", 1);
        std::cout << t << '\n';
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
