
#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}

Intern  &Intern::operator = (const Intern &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

AForm   *Intern::makeForm(const string &formName, const string &target)
{
    AForm *forms[] = {
        new ShrubberyCreationForm(target),
        new PresidentialPardonForm(target),
        new RobotomyRequestForm(target)
        };

    const string names[]  = {
        "shrubbery creation",
        "presidential pardon",
        "robotomy request"
        };

    for (int i; i < 3; i++)
    {
        if (names[i] == formName)
        {
            for (int j; j < 3; j++)
            {
                if (i != j)
                    delete forms[i];
            }
            cout << "Intern creates " << formName << endl;
            return forms[i];
        }
    }
    for (int i; i < 3; i++)
        delete forms[i];
    return NULL;
}