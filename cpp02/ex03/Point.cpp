
#include "Point.hpp"

Point::~Point(void){}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y) {}

Point::Point(const Point &copy) : x(copy.x) , y(copy.y) {}

Point &Point::operator = (const Point &copy)
{
	x = copy.x;
	y = copy.y;
	return *this;
}

