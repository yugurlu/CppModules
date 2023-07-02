
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
    this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator = (const Cat &copy)
{
    if(this == &copy)
        return *this;
    *this = copy;
    this->brain = new Brain(*copy.brain);
    return *this;
}

void    Cat::makeSound(void) const
{
    cout << "*MEOWING SOUNDS*" << endl;
}
