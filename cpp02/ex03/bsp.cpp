
#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float areaABC = abs((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0);
    float areaPAB = abs((point.getX() * (a.getY() - b.getY()) + a.getX() * (b.getY() - point.getY()) + b.getX() * (point.getY() - a.getY())) / 2.0);
    float areaPBC = abs((point.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - point.getY()) + c.getX() * (point.getY() - b.getY())) / 2.0);
    float areaPCA = abs((point.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - point.getY()) + a.getX() * (point.getY() - c.getY())) / 2.0);

    return (areaPAB + areaPBC + areaPCA == areaABC);
}