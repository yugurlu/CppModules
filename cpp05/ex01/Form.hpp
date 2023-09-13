
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Bureaucrat;

class   Form
{
    private:
        bool sign;
        const int grade;
        const string name;
        const int execGrade;
    public:
        AForm();
        Form(const Form &);
        ~Form();
        Form &operator = (const Form &);
        Form(string name, int grade, int execGrade);

        bool getSign(void) const;
        int getGrade(void) const;
        string getName(void) const;
        int getExecGrade(void) const;
        
        void beSigned(Bureaucrat &);

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

ostream &operator << (ostream &os, const Form &);

#endif