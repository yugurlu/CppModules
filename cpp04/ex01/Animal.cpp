
#include "Animal.hpp"

Animal::Animal()
{
    cout << "Animal constructor called" << endl;
}

Animal::~Animal()
{
    cout << "Animal destructor called" << endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
}

Animal  &Animal::operator = (const Animal &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void    Animal::makeSound(void) const
{
    cout << "*ANIMAL SOUNDS*" << endl;
}

string  Animal::getType(void) const
{
    return this->type;
}

