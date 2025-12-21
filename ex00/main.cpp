#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat x("test", 151);
        try
        {
            std::cout << "heree\n";
            x.worseGrade();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
