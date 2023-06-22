
#include "Point.hpp"

float distance(const Point& a, const Point& b)
{
    float dx = b.getX() - a.getX();
    float dy = b.getY() - a.getY();
    return sqrt(dx * dx + dy * dy);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float areaABC = abs((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0);
    float areaPAB = abs((point.getX() * (a.getY() - b.getY()) + a.getX() * (b.getY() - point.getY()) + b.getX() * (point.getY() - a.getY())) / 2.0);
    float areaPBC = abs((point.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - point.getY()) + c.getX() * (point.getY() - b.getY())) / 2.0);
    float areaPCA = abs((point.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - point.getY()) + a.getX() * (point.getY() - c.getY())) / 2.0);

    float area = areaPAB + areaPBC + areaPCA;

    if (abs(area - areaABC) <= 0.00001)
    {
        float edge1 = distance(a, b);
        float edge2 = distance(b, c);
        float edge3 = distance(c, a);
        float distanceToEdge1 = distance(point, a) + distance(point, b) - edge1;
        float distanceToEdge2 = distance(point, b) + distance(point, c) - edge2;
        float distanceToEdge3 = distance(point, c) + distance(point, a) - edge3;
        if (distanceToEdge1 <= 0.00001 || distanceToEdge2 <= 0.00001 || distanceToEdge3 <= 0.00001)
            return false;
    }
    return area == areaABC;
}