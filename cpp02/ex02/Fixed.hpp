
#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class Fixed
{
    private:
        int fixedNumber;
        static const int bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &);
        Fixed &operator = (const Fixed &);
        int getRawBits(void) const;
        void setRawBits(int const);
        int toInt(void) const;
        float toFloat(void) const;

        float   operator + (const Fixed &fixed);
        float   operator - (const Fixed &fixed);
        float   operator * (const Fixed &fixed);
        float   operator / (const Fixed &fixed);

        bool    operator > (const Fixed &fixed);
        bool    operator < (const Fixed &fixed);
        bool    operator >= (const Fixed &fixed);
        bool    operator <= (const Fixed &fixed);
        bool    operator == (const Fixed &fixed);
        bool    operator != (const Fixed &fixed);

        Fixed   operator ++ (int);
        Fixed   operator -- (int);
        Fixed   operator ++ (void);
        Fixed   operator -- (void);

        static Fixed   &min(Fixed &fixed1, Fixed &fixed2);
        static Fixed   &max(Fixed &fixed1, Fixed &fixed2);
        static Fixed const &min(const Fixed &fixed1, const Fixed &fixed2);
        static Fixed const &max(const Fixed &fixed1, const Fixed &fixed2);
};

ostream	&operator << (ostream &o, const Fixed &fixed);

#endif