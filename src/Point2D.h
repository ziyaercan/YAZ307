#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
class Point2D
{
    private:
        double m_x;
        double m_y;
        static int s_counter;
    public:

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
            s_counter--;
        }

        void print();
        double getX() const { return m_x;}
        double getY() const { return m_y;}

        void setX(const double x) {m_x = x;}
        void setY(const double m_y) {this->m_y = m_y;}

        static int getCounter() {return s_counter;}

        double getDistance(const Point2D& point2);

        Point2D operator-(const Point2D& point2);

        friend void resetPoint2D(Point2D& point);
        friend Point2D operator+(const Point2D& point1, const Point2D& point2);
};

#endif
