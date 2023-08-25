#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::string;

class   RPN
{
    private:
        string input;
        int numbers[100];
    public:
        RPN(string);
        ~RPN();
        RPN(const RPN &);
        RPN &operator = (const RPN &);

        void    readRPN(void);
        int    calculator(int, int, char);
};

#endif