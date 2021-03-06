#include "Point2D.h"
#include <cmath>
void Point2D::print()
{
    std::cout<<"The point is located at ("<<m_x<<","<<m_y<<")"<<'\n';

}

double Point2D::getDistance(const Point2D& point2)
{
    
    return sqrt(pow(this->m_x-point2.getX(),2) + pow(this->m_y - point2.getY(),2));
}

int Point2D::s_counter{0};

Point2D Point2D::operator-(const Point2D& point2)
{
    return Point2D{this->m_x - point2.m_x, this->m_y-point2.m_y};
}
