#include <iostream>
#include "Point2D.h"

int main()
{
   
    Point2D point1{3.0, 4.0};
    Point2D point2{2.0, 2.0};
    const Point2D origin{0.0, 0.0};
    std::cout<<"There are "<<Point2D::getCounter()<<" objects now\n";
    {
        Point2D point3{3.0, 4.0};
        std::cout<<"There are "<<Point2D::getCounter()<<" objects now\n";
    }
    std::cout<<"There are "<<Point2D::getCounter()<<" objects now\n";
    point1.setX(3.4);
    point1.setY(5.6);
    point1.print();
    resetPoint2D(point1);
    point1.print();
    
    Point2D point3{point1+point2};
    point3.print();

    Point2D point4{point1-point2};
    point4.print();

    std::cout<<"The distance = "<<point1.getDistance(origin)<<'\n';

    return 0;
} 

