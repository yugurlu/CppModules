
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::ofstream;

class AForm;

class   Bureaucrat
{
    private:
        int grade;
        const   string name;
    public:
        Bureaucrat(int, const string);
        
        void setGrade(int);
        int getGrade(void) const;
        string  getName(void) const;

        void    incrementGrade(void);
        void    decrementGrade(void);

        void    signFrom(AForm &);
        void    executeForm(AForm const &);

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