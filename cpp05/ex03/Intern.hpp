
#ifndef  INTERN_HPP
#define  INTERN_HPP

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class   Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &);
        Intern  &operator = (const Intern &);

        AForm    *makeForm(const string &, const string &);
};

#endif