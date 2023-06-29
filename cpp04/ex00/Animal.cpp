
#include "Animal.hpp"

Animal::Animal()
{
    cout << "Base constructor called" << endl;
}

Animal::~Animal()
{
    cout << "Base destructor called" << endl;
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
    cout << "Base makeSound called" << endl;
}

string  Animal::getType(void)
{
    return this->type;
}

