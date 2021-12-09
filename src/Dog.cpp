#include "Dog.h"
void Dog::print(int index)
{
    std::cout<<"Dog INFO:\n"
             <<"Index: "<< index<<"\n"
             <<"Name: "<<getName()<<"\n"
             <<"Age : "<<getAge()<<"\n"
             <<"Female? : "<<isFemale()<<"\n"
             <<"Caretaker : "<<m_caretaker<<"\n"
             <<"Type : "<<m_type<<"\n";

}

void Dog::print()
{
    std::cout<<"Dog INFO:\n"
             <<"Name: "<<getName()<<"\n"
             <<"Age : "<<getAge()<<"\n"
             <<"Female? : "<<isFemale()<<"\n"
             <<"Caretaker : "<<m_caretaker<<"\n"
             <<"Type : "<<m_type<<"\n";

}

void Dog::speak()
{
    std::cout<<"Hav hav \n";
}
int Dog::s_counter{0};