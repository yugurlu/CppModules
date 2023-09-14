
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat(149, "bureaucrat");
        ShrubberyCreationForm shrubbery("shrubbery");

        bureaucrat.signFrom(shrubbery);
        bureaucrat.setGrade(138);
        shrubbery.execute(bureaucrat);
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    } 
}
