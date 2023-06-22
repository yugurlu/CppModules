
#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->fixedNumber = 0;
}

Fixed::Fixed(const int fixedNumber)
{
    this->fixedNumber = fixedNumber * (1 << this->bits);
}

Fixed::Fixed(const float fixedNumber)
{
    this->fixedNumber = roundf(fixedNumber * (1 << this->bits));
}

Fixed::~Fixed(void) {}

Fixed::Fixed(const Fixed &copy)
{
    this->fixedNumber = copy.fixedNumber;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
    this->fixedNumber = copy.fixedNumber;
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->fixedNumber;
}

void Fixed::setRawBits(int const fixedNumber)
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

float   Fixed::operator + (const Fixed &fixed)
{
    return this->toFloat() + fixed.toFloat();
}

float   Fixed::operator - (const Fixed &fixed)
{
    return this->toFloat() - fixed.toFloat();
}

float   Fixed::operator * (const Fixed &fixed)
{
    return this->toFloat() * fixed.toFloat();
}

float   Fixed::operator / (const Fixed &fixed)
{
    return this->toFloat() / fixed.toFloat();
}

bool    Fixed::operator > (const Fixed &fixed)
{
    return this->toFloat() > fixed.toFloat() ? true : false;
}

bool    Fixed::operator < (const Fixed &fixed)
{
    return this->toFloat() < fixed.toFloat() ? true : false;
}

bool    Fixed::operator >= (const Fixed &fixed)
{
    return this->toFloat() >= fixed.toFloat() ? true : false;
}

bool    Fixed::operator <= (const Fixed &fixed)
{
    return this->toFloat() <= fixed.toFloat() ? true : false;
}

bool    Fixed::operator == (const Fixed &fixed)
{
    return this->toFloat() == fixed.toFloat() ? true : false;
}

bool    Fixed::operator != (const Fixed &fixed)
{
    return this->toFloat() != fixed.toFloat() ? true : false;
}

Fixed   Fixed::operator ++ (int)
{
    Fixed temp = *this;
    this->fixedNumber++;
    return temp;
}

Fixed   Fixed::operator -- (int)
{
    Fixed temp = *this;
    this->fixedNumber--;
    return temp;
}

Fixed   Fixed::operator ++ (void)
{
    ++this->fixedNumber;
    return *this;
}

Fixed   Fixed::operator -- (void)
{
    --this->fixedNumber;
    return *this;
}

Fixed   &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    return fixed1.toFloat() >= fixed2.toFloat() ? fixed2 : fixed1;
}

Fixed   &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    return fixed1.toFloat() <= fixed2.toFloat() ? fixed2 : fixed1;
}

Fixed const &Fixed::min(const Fixed &fixed1, const Fixed & fixed2)
{
    return fixed1.toFloat() >= fixed2.toFloat() ? fixed2 : fixed1;
}

Fixed const &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
    return fixed1.toFloat() <= fixed2.toFloat() ? fixed2 : fixed1;
}

ostream	&operator << (ostream &operatorr, const Fixed &fixed)
{
    operatorr << fixed.toFloat();
    return operatorr;
}

