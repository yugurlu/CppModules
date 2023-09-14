
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const string &target) : AForm(target, 72, 45) , target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
    (void)copy;
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if(this->executer_control(executor))
    {
        cout << "DRRDRDRDRDRDRDRDRDRDRRR" << endl;
        time_t current_time = time(NULL);
        if (current_time % 2 == 0)
            cout << this->target << " has been robotomize successfully" << endl;
        else
            cout << this->target << " has been robotomize failed" << endl;
    }
}








