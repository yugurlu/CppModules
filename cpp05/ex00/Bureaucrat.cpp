
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, string name) : name(name)
{
    if(grade > 150)
        throw GradeTooLowException();
    else if (grade < 1) 
        throw GradeTooHighException();
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

ostream& operator << (ostream& os, const Bureaucrat &arg)
{
    os << arg.getName() << ", bureaucrat grade " << arg.getGrade() << ".";
    return os;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low! Grade needs to be between 1 and 150\n";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High! Grade needs to be between 1 and 150\n";
}