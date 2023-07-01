
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    cout << "WrongCat constructor called" << endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    cout << "WrongCat destructor called" << endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
}

WrongCat &operator = (const WrongCat &copy)
{
    *this = copy;
    return *this;
}

void    WrongCat::makeSound(void)
{
    cout << "*WRONG MEOWING SOUNDS*" << endl;
}
