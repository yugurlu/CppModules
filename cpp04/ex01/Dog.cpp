
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
    this->brain = new Brain(*copy.brain);
}

Dog &Dog::operator = (const Dog &copy)
{
    if (this != &copy)
        *this = copy;
    *this = copy;
    this->brain = new Brain(*copy.brain);
    return *this;
}

void    Dog::makeSound(void) const
{
    cout << "*BARKING SOUNDS*" << endl;
}
