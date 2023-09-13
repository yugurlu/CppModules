
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include <time.h>

class   RobotomyRequestForm : public AForm
{
    private:
        string target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const string &);
        RobotomyRequestForm(const RobotomyRequestForm &);
        RobotomyRequestForm &operator = (const RobotomyRequestForm &);

        void    execute(Bureaucrat const & executor) const;
};

#endif