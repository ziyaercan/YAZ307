#include <iostream>
#include "Point2D.h"
int main()
{
   
    Point2D point1{3.0, 4.0};
    const Point2D origin{0.0, 0.0};

    std::cout<<"There are "<<Point2D::s_counter<<" objects now\n";
    point1.setX(3.4);
    // point1.setY(5.6);
    // point1.print();
    // point2.print();

    std::cout<<"The distance = "<<point1.getDistance(origin)<<'\n';

    return 0;
} 