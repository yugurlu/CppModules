
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const string &target) : AForm(target, 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}





