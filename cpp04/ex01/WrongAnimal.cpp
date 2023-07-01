
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    cout << "WrongAnimal constructor called" << endl; 
}

WrongAnimal::~WrongAnimal()
{
    cout << "WrongAnimal destructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void    WrongAnimal::makeSound(void) const
{
    cout << "*WRONG ANIMAL SOUNDS???*" << endl;
}

string  WrongAnimal::getType(void) const
{
    return this->type;
}