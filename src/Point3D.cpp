#include "Point3D.h"
#include <cmath>
void Point3D::print()
{
    std::cout<<"The 3D point is located at ("<<m_x<<","<<m_y<<","<<m_z<<")"<<'\n';

}

double Point3D::getDistance(const Point3D& point2)
{
    return sqrt(pow(this->m_x-point2.getX(),2) + 
                pow(this->m_y - point2.getY(),2) +
                pow(this->m_z - point2.getZ(),2));
}

int Point3D::s_counter{1};