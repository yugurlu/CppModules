
#include "Dog.hpp"

Dog::Dog()
{
    cout << "Dog constructor called" << endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    cout << "Dog destructor called" << endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
}

Dog &Dog::operator = (const Dog &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void    Dog::makeSound(void) const
{
    cout << "*BARKING SOUNDS*" << endl;
}
