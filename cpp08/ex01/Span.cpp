
#include "Span.hpp"

Span::Span()
{
    this->maxLen = 0;
}

Span::Span(int maxLen)
{
    this->maxLen = maxLen;
}

Span::~Span() {}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span    &Span::operator = (const Span &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void    Span::addNumber(int number)
{
    if ((this->N.size() == 0 || *std::find(this->N.begin(),this->N.end(), number) == 0) && this->N.size() != this->maxLen)
        this->N.push_back(number);
    else
    {

        cout << number << endl;
        throw "Number already added!";
    }
}

int Span::longestSpan(void)
{
    if (this->N.size() > 1)
        return (*std::max_element(this->N.begin(), this->N.end()) - *std::min_element(this->N.begin(), this->N.end()));
    else
        throw "Insufficient number of numbers!";
}

int Span::shortestSpan(void)
{
    if (this->N.size() > 1)
        return (*std::min_element(this->N.begin(), this->N.end()) - *std::max_element(this->N.begin(), this->N.end()));
    else
        throw "Insufficient number of numbers!";
}


