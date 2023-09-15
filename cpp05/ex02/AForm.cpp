
#include "AForm.hpp"

AForm::AForm() : sign(false) , grade(1), name(""), execGrade(1) {}

AForm::AForm(string name, int grade, int execGrade) : sign(false), grade(grade), name(name), execGrade(execGrade)
{
    if(this->grade > 150 || this->execGrade > 150)
        throw GradeTooLowException();
    else if (this->grade < 1 || this->execGrade < 1) 
        throw GradeTooHighException();
}

AForm::AForm(const AForm &copy) : grade(copy.grade), name(copy.name), execGrade(copy.execGrade) {}

AForm::~AForm()
{
    cout << "Destructor called!" << endl;
}

AForm    &AForm::operator = (const AForm &copy)
{
    if (this != &copy)
        this->sign = copy.getSign();
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
    os << AForm.getName() << endl << AForm.getGrade() << endl << AForm.getExecGrade() << endl << AForm.getSign() << endl;
    return os;
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low! Grade needs to be between 1 and 150";
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High! Grade needs to be between 1 and 150";
}

const char *AForm::FormNotSigned::what() const throw()
{
    return "Form is not signed!";
}

bool    AForm::executer_control(const Bureaucrat &executor) const
{
    if (this->getSign() == false)
        throw FormNotSigned();
    else if (executor.getGrade() < this->getExecGrade())
        throw GradeTooLowException();
    return true;
}