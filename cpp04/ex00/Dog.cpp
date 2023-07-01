
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

Dog &operator = (const Dog &copy)
{
    *this = copy;
    return *this;
}

void    Dog::makeSound(void)
{
    cout << "*BARKING SOUNDS*" << endl;
}
