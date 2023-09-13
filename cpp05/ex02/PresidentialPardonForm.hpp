
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class   PresidentialPardonForm : public AForm
{
    private:
        string target;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(const string &);
        PresidentialPardonForm(const PresidentialPardonForm &);
        PresidentialPardonForm &operator = (const PresidentialPardonForm &);

        void    execute(Bureaucrat const & executor) const;
};

#endif