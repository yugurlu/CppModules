
#include "AForm.hpp"

AForm::AForm() : sign(false) , grade(1), name(""), execGrade(1) {}

AForm::AForm(string name, int grade, int execGrade) : sign(false), grade(grade), name(name), execGrade(execGrade) {}

AForm::AForm(const AForm &copy) : grade(copy.grade), name(copy.name), execGrade(copy.execGrade) {}

AForm::~AForm()
{
    cout << "Destructor called!" << endl;
}

AForm    &AForm::operator = (const AForm &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

bool AForm::getSign(void) const
{
    return this->sign;
}  

int AForm::getGrade(void) const
{
    return this->grade;
}

int AForm::getExecGrade(void) const
{
    return this->execGrade;
}

string  AForm::getName(void) const
{
    return this->name;
}

void    AForm::beSigned(Bureaucrat &arg)
{
    if (this->getGrade() > arg.getGrade())
        throw GradeTooLowException();
     this->sign = true;
}


ostream &operator << (ostream &os, const AForm &AForm)
{
    os <<AForm.getName() << endl << AForm.getGrade() << endl << AForm.getExecGrade() << endl << AForm.getSign() << endl;
    return os;
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low!\n";
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High!\n";
}

const char *AForm::FormNotSigned::what() const throw()
{
    return "Form is not signed!\n";
}

bool    AForm::executer_control(const Bureaucrat &executor) const
{
    try
    {
        if (this->getSign() == false)
            throw FormNotSigned();
        else if (executor.getGrade() < this->getExecGrade())
            throw GradeTooHighException();
    }
    catch (std::exception &e)
    {
        cout << e.what();
        return false;
    }
    return true;
}