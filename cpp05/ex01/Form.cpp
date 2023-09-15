
#include "Form.hpp"

Form::Form() : sign(false), grade(1), name(""), execGrade(1) {}

Form::Form(string name, int grade, int execGrade) : sign(false), grade(grade), name(name), execGrade(execGrade)
{
    if(this->grade > 150 || this->execGrade > 150)
        throw GradeTooLowException();
    else if (this->grade < 1 || this->execGrade < 1) 
        throw GradeTooHighException();
}

Form::Form(const Form &copy) : grade(copy.grade), name(copy.name), execGrade(copy.execGrade) {}

Form::~Form()
{
    cout << "Destructor called!" << endl;
}

Form    &Form::operator = (const Form &copy)
{
    if (this != &copy)
        this->sign = copy.getSign();
    return *this;
}

bool Form::getSign(void) const
{
    return this->sign;
}  

int Form::getGrade(void) const
{
    return this->grade;
}

int Form::getExecGrade(void) const
{
    return this->execGrade;
}

string  Form::getName(void) const
{
    return this->name;
}

void    Form::beSigned(Bureaucrat &arg)
{
    if (this->getGrade() > arg.getGrade())
        throw GradeTooLowException();
     this->sign = true;
}


ostream &operator << (ostream &os, const Form &form)
{
    os <<form.getName() << endl << form.getGrade() << endl << form.getExecGrade() << endl << form.getSign() << endl;
    return os;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low! Grade needs to be between 1 and 150";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High! Grade needs to be between 1 and 150";
}
