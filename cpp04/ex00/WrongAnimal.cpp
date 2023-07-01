
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

WrongAnimal &operator = (const WrongAnimal &copy)
{
    *this = copy;
    return *this;
}

void    WrongAnimal::makeSound(void)
{
    cout << "*WRONG ANIMAL SOUNDS???*" << endl;
}

string  WrongAnimal::getType(void)
{
    return this->type;
}