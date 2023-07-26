
#include "Span.hpp"

Span::Span()
{
    this->len = 0;
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

    if (this->len == 0 || *std::find(this->N.begin(),this->N.end(), number) == 0)
    {
        this->len++;
        this->N.push_back(number);
    }
    else
        throw "Numnber already added!";
}

int Span::longestSpan(void)
{
    if (this->len > 1)
        return (*std::max_element(this->N.begin(), this->N.end()) - *std::min_element(this->N.begin(), this->N.end()));
    else
        throw "Insufficient number of numbers!";
}

int Span::shortestSpan(void)
{
    if (this->len > 1)
        return (*std::min_element(this->N.begin(), this->N.end()) - *std::max_element(this->N.begin(), this->N.end()));
    else
        throw "Insufficient number of numbers!";
}


