#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string.h>
#include <list>
#include <array>

using std::cout;
using std::endl;
using std::string;

class   RPN
{
    private:
        string input;
        std::array<int, 1000000> numbers;
    public:
        RPN(string);
        ~RPN();
        RPN(const RPN &);
        RPN &operator = (const RPN &);

        void    readRPN(void);
        int    calculator(int, int, char);
        bool     control(void);
};

#endif