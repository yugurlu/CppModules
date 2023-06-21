
#include "Point.hpp"

Point::~Point(void){}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y) {}

Point::Point(const Point &copy) : x(copy.x) , y(copy.y) {}

Point &Point::operator = (const Point &copy) 
{
	(void)copy;
	return *this;
}

int Point::getX(void) const
{
	return this->x.toInt();
}

int	Point::getY(void) const
{
	return this->y.toInt();
}