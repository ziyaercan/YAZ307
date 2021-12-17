#include "Animal.h"
void Animal::print()
{
    std::cout<<"ANIMAL INFO:\n"
             <<"Name: "<<m_name<<"\n"
             <<"Age : "<<m_age<<"\n"
             <<"Family : "<<m_family<<"\n"
             <<"Female? : "<<m_isFemale<<"\n";

}


int Animal::s_counter{0};