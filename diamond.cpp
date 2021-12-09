#include <iostream>
#include "Animal.h"

class Horse : virtual public Animal
{
    public:
        Horse()
        {
            std::cout<<"Horse object created\n";
        }

};

class Donkey : virtual public Animal
{
    public:
        Donkey()
        {
           std::cout<<"Donkey object created\n"; 
        }

};


class Mule : public Donkey, public Horse
{
    public:
        Mule()
        {
           std::cout<<"Mule object created\n"; 
        }

};


int main()
{


    Donkey donkey1;
    Horse horse1;
    Mule mule1;

    
   
    return 0;
} 

