
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"

class   ShrubberyCreationForm : AForm
{
    private:
        string target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const string &);
        ShrubberyCreationForm(const ShrubberyCreationForm &);
        ShrubberyCreationForm &operator = (const ShrubberyCreationForm &);

        void    execute(Bureaucrat const & executor);
        int     executer_control(Bureaucrat const & executor);
};

#endif