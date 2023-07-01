
#include "Cat.hpp"

Cat::Cat()
{
    cout << "Cat constructor called" << endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    cout << "Cat destructor called" << endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
}

Cat &operator = (const Cat &copy)
{
    *this = copy;
    return *this;
}

void    Cat::makeSound(void)
{
    cout << "*MEOWING SOUNDS*" << endl;
}
