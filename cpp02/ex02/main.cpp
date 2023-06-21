
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    cout << "--------------------------" << endl;
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;
    cout << b << endl;
    cout << Fixed::max( a, b ) << endl;

    return 0;
}