#ifndef POINT3D_H
#define POINT3D_H

#include <iostream>
class Point3D
{
    double m_x;
    double m_y;
    double m_z;
    
    public:

        static int s_counter;

        Point3D(): m_x{0.0}, m_y{0.0}, m_z{0.0}
        {
            s_counter++;
        }

        Point3D(double x, double y, double z):m_x{x}, m_y{y}, m_z{z}
        {
            s_counter++;
        }

        ~Point3D()
        {
            std::cout<<"The Point3D object is destructed\n";
        }

        void print();
        double getX() const { return m_x;}
        double getY() const { return m_y;}
        double getZ() const { return m_z;}

        void setX(const double x) {m_x = x;}
        void setY(const double m_y) {this->m_y = m_y;}
        void setZ(const double m_z) {this->m_z = m_z;}

        double getDistance(const Point3D& point2);
};

#endif
