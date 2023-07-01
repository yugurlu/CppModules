
#include "Dog.hpp"

Dog::Dog()
{
    cout << "Dog constructor called" << endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    cout << "Dog destructor called" << endl;
    delete this->brain;
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
