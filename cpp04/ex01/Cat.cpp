
#include "Cat.hpp"

Cat::Cat()
{
    cout << "Cat constructor called" << endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    cout << "Cat destructor called" << endl;
    delete this->brain;
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
