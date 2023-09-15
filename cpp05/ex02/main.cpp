
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat(149, "bureaucrat");
        ShrubberyCreationForm shrubbery("shrubbery");

        bureaucrat.signFrom(shrubbery);
        bureaucrat.executeForm(shrubbery);
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    } 
}
