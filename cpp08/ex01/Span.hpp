
#ifndef SPAN_HPP
#define SPAN_HPP

#include <deque>
#include <iostream>
#include <bit>

using std::cout;
using std::endl;
using std::string;

class   Span
{
    private:
        unsigned int maxLen;
        std::deque<int> N;
    public:
        Span();
        Span(int);
        ~Span();
        Span(const Span &);
        Span    &operator = (const Span &);

        int longestSpan(void);
        int shortestSpan(void);

        void    addNumber(int);
};


#endif