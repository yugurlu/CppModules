
#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->fixedNumber = 0;
    cout << "Default constructor called" << endl;
}

Fixed::~Fixed(void)
{
    cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &copy)
{
    cout << "Copy constructor called" << endl;  
    this->fixedNumber = copy.fixedNumber;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
    cout << "Copy assignment operator called" << endl;
    this->fixedNumber = copy.fixedNumber;
    return *this;
}

int Fixed::getRawBits(void)
{
    cout << "getRawBits member function called" << endl;
    return this->fixedNumber;
}

void Fixed::setRawBits(int fixedNumber)
{
    this->fixedNumber = fixedNumber;
}