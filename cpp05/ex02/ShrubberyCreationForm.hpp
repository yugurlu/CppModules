
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class   ShrubberyCreationForm : public AForm
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
};

#endif