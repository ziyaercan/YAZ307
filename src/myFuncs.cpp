#include "myFuncs.h"

void resetPoint2D(Point2D& point)
{
    point.m_x = 0;
    point.m_y = 0;
}

Point2D operator+(const Point2D& point1, const Point2D& point2)
{
    return Point2D{point1.m_x+point2.m_x,
                   point1.m_y+point2.m_y};    
}
