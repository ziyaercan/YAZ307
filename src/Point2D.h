#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
class Point2D
{
    double m_x;
    double m_y;
    
    public:

        static int s_counter;

        Point2D(): m_x{2.0}, m_y{3.0}
        {
            s_counter++;
        }

        Point2D(double x, double y):m_x{x}, m_y{y}
        {
            s_counter++;
        }

        ~Point2D()
        {
            std::cout<<"The object is destructed\n";
        }

        void print();
        double getX() const { return m_x;}
        double getY() const { return m_y;}

        void setX(const double x) {m_x = x;}
        void setY(const double m_y) {this->m_y = m_y;}

        double getDistance(const Point2D& point2);
};

#endif
