#include "Cat.h"
void Cat::print(int index)
{
    std::cout<<"Cat INFO:\n"
             <<"Index: "<< index<<"\n"
             <<"Name: "<<getName()<<"\n"
             <<"Age : "<<getAge()<<"\n"
             <<"Female? : "<<isFemale()<<"\n"
             <<"Caretaker : "<<m_caretaker<<"\n"
             <<"Type : "<<m_type<<"\n";

}

void Cat::print()
{
    std::cout<<"Cat INFO:\n"
             <<"Name: "<<getName()<<"\n"
             <<"Age : "<<getAge()<<"\n"
             <<"Female? : "<<isFemale()<<"\n"
             <<"Caretaker : "<<m_caretaker<<"\n"
             <<"Type : "<<m_type<<"\n";

}

void Cat::speak()
{
    std::cout<<"Miyav miyav \n";
}
int Cat::s_counter{0};