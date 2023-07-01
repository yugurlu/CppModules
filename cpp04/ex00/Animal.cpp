
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

Animal  &operator = (const Animal &copy)
{
    *this = copy;
    return *this;
}

void    Animal::makeSound(void)
{
    cout << "*ANIMAL SOUNDS*" << endl;
}

string  Animal::getType(void)
{
    return this->type;
}

