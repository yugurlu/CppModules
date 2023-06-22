
#include "Point.hpp"

int main()
{
    const Point a(1, 20);
    const Point b(20, 20);
    const Point c(10, 5);
    const Point target(10, 10);

    if (bsp(a, b ,c, target)) cout << "inside" << endl;
    else cout << "outside" << endl;
}

