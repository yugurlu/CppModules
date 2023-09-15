
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, string name) : name(name)
{
    if(grade > 150)
        throw GradeTooHighException();
    else if (grade < 1) 
        throw GradeTooLowException();
    this->grade = grade;
}

int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

string  Bureaucrat::getName(void) const
{
    return  this->name;
}

void    Bureaucrat::setGrade(int grade)
{
    this->grade = grade;
}

void    Bureaucrat::incrementGrade(void)
{
    if (this->grade - 1 > 150)
        throw GradeTooHighException();
    this->grade -= 1;
}

void    Bureaucrat::decrementGrade(void)
{
    if (this->grade + 1 > 1)
        throw GradeTooLowException();
    this->grade += 1;
}

void    Bureaucrat::signFrom(AForm &AForm)
{
    if (AForm.getSign() == false)
    {
        try
        {
            AForm.beSigned(*this);
        }
        catch (std::exception &e)
        {
            cout  << this->getName() << " couldn't sign " << AForm.getName() << " because grade is too low!" << endl;
            return ;
        }
        cout << this->getName() << " signed " << AForm.getName() << endl; 
    }
    else
        cout  << this->getName() << " couldn't sign " << AForm.getName() << " because AForm already signed!" << endl;
}


void    Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        cout << this->getName() << " executed " << form.getName() << endl;
    }
    catch (std::exception &e)
    {
        cout << this->getName() << " could not executed " << form.getName() << endl;
        return;
    }
}

ostream& operator << (ostream& os, const Bureaucrat &arg)
{
    os << arg.getName() << ", bureaucrat grade " << arg.getGrade() << ".";
    return os;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low! Grade needs to be between 1 and 150";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High! Grade needs to be between 1 and 150";
}