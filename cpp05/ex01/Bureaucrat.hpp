
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Form;

class   Bureaucrat
{
    private:
        int grade;
        const   string name;
    public:
        Bureaucrat(int, const string);
        
        int getGrade(void) const;
        string  getName(void) const;

        void    incrementGrade(void);
        void    decrementGrade(void);

        void    signFrom(Form &);


	class GradeTooLowException: public std::exception
    {
	    public:
		    virtual const char *what()const throw();
    };
    class GradeTooHighException: public std::exception
    {
	    public:
		    virtual const char *what()const throw();
	};
};

ostream& operator << (ostream& os, const Bureaucrat &);

#endif