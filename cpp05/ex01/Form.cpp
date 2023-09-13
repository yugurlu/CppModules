
#include "Form.hpp"

AForm::AForm() : sign(false) , grade(1), name(""), execGrade(1) {}

Form::Form(string name, int grade, int execGrade) : sign(false), grade(grade), name(name), execGrade(execGrade) {}

Form::Form(const Form &copy) : grade(copy.grade), name(copy.name), execGrade(copy.execGrade) {}

Form::~Form()
{
    cout << "Destructor called!" << endl;
}

Form    &Form::operator = (const Form &copy)
{
    if (this != &copy)
        *this = copy;
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
	return "Grade Too Low!n";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High!\n";
}
