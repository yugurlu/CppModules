
#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        ~Point();
        Point(const Fixed, const Fixed);
        Point(const Point &);
        Point &operator = (const Point &);
        int getX(void) const;
        int getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif