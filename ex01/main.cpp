#include "Bureaucrat.hpp"

int main()
{
    
    try
    {
        Bureaucrat x("testName", 1);
        x.betterGrade();
        std::cout << x;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}
