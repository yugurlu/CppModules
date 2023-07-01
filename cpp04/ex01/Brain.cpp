
#include "Brain.hpp"

Brain::Brain()
{
    cout << "Brain constructor called" << endl;
}

Brain::~Brain()
{
    cout << "Brain destructor called" << endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
}

Brain   &Brain::operator = (const Brain &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}