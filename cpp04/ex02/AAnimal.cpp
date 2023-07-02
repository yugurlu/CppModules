
#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    cout << "AAnimal constructor called" << endl;
}

AAnimal::~AAnimal()
{
    cout << "AAnimal destructor called" << endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    *this = copy;
}

AAnimal  &AAnimal::operator = (const AAnimal &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void    AAnimal::makeSound(void) const
{
    cout << "*AAnimal SOUNDS*" << endl;
}

string  AAnimal::getType(void) const
{
    return this->type;
}

