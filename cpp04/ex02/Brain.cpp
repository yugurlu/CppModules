
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
    cout << "overload" << endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
    return *this;
}
