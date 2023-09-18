
#include "whatever.hpp"

class Awsome
{
    private:
        int _n;
    public:
        Awsome(void) : _n(0) {}
        Awsome(int n): _n(n) {}
        Awsome & operator = (const Awsome & a) { _n = a._n; return *this; }
        bool operator == (const Awsome & rhs) const { return this->_n == rhs._n; }
        bool operator != (const Awsome & rhs) const { return this->_n != rhs._n; }
        bool operator > (const Awsome & rhs) const { return this->_n > rhs._n; }
        bool operator < (const Awsome & rhs) const { return this->_n < rhs._n; }
        bool operator >= (const Awsome & rhs) const { return this->_n >= rhs._n; }
        bool operator <= (const Awsome & rhs) const { return this->_n <= rhs._n; }

        int get_n() const { return _n; }
};

std::ostream & operator << (std::ostream & o, const Awsome &a) { o << a.get_n(); return o; }


int main( void )
{
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

        //-------------------------------------------------------------------------------------------------//

        Awsome test(2), test2(4);
        swap(test, test2);
        std::cout << "test = " << test << ", test2 = " << test2 << std::endl;
        std::cout << max(test, test2) << std::endl;
        std::cout << min(test, test2) << std::endl;
        return 0;
}