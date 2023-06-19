
#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->number = 0;
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int number)
{
    cout << "Int constructor called" << endl;
    this->number = number;
}

Fixed::Fixed(const float number)
{
    cout << "Float constructor called" << endl;
    this->number = number;
}

Fixed::~Fixed(void)
{
    cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &copy)
{
    cout << "Copy constructor called" << endl;  
    this->number = copy.number;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
    cout << "Copy assignment operator called" << endl;
    this->number = copy.number;
    return *this;
}

int Fixed::getRawBits(void)
{
    cout << "getRawBits member function called" << endl;
    return this->number;
}

void Fixed::setRawBits(int number)
{
    this->number = number;
}

std::ostream	&operator<<(std::ostream &operatorr, Fixed &fixed)
{
    operatorr << fixed.getRawBits();
    return operatorr;
}