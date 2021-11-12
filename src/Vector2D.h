#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
#include "Point2D.h"

class Vector2D
{
    Point2D m_p1;
    Point2D m_p2;
    
    public:

        static int s_counter;

        Vector2D(): m_p1{Point2D{0,0}}, m_p2{Point2D{0.0,0.0}}
        {
            s_counter++;
        }

        Vector2D(Point2D& p1, Point2D& p2):m_p1{p1}, m_p2{p2}
        {
            s_counter++;
        }

        ~Vector2D()
        {
            std::cout<<"The vector object is destructed\n";
        }

        void print();
        Point2D getP1() const { return m_p1;}
        Point2D getP2() const { return m_p2;}

        void setP1(const Point2D& p1) {m_p1 = p1;}
        void setP2(const Point2D& p2) {m_p2 = p2;}

        // double getDistance(const Point2D& point2);
};

#endif
