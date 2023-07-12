
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const string &target) : AForm((target), 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
    *this = copy;
}

PresidentialPardonForm  &PresidentialPardonForm::operator = (const PresidentialPardonForm &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor)
{
    if (this->executer_control(executor))
        cout << this->target << " has been pardoned by Zaphod Beeblebrox" << endl;
}
