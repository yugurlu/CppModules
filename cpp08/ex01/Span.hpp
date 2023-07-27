
#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <bit>

using std::cout;
using std::endl;

class   Span
{
    private:
        unsigned int maxLen;
        std::vector<int> N;
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