
#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->fixedNumber = 0;
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int fixedNumber)
{
    cout << "Int constructor called" << endl;
    this->fixedNumber = fixedNumber * (1 << this->bits);
}

Fixed::Fixed(const float fixedNumber)
{
    cout << "Float constructor called" << endl;
    this->fixedNumber = roundf(fixedNumber * (1 << this->bits));
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
    return this->fixedNumber;
}

void Fixed::setRawBits(int fixedNumber)
{
    this->fixedNumber = fixedNumber;
}

int Fixed::toInt(void) const
{
    return (this->fixedNumber >> this->bits);
}

float Fixed::toFloat(void) const
{
    return ((float)this->fixedNumber / (float)(1 << this->bits));
}

std::ostream	&operator << (std::ostream &operatorr, const Fixed &fixed)
{
    operatorr << fixed.toFloat();
    return operatorr;
}