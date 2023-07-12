
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat bureaucrat(146, "bureaucrat");
    ShrubberyCreationForm shrubbery("shrubbery");


    bureaucrat.signFrom(shrubbery);
    bureaucrat.setGrade(136);
    shrubbery.execute(bureaucrat);
}
