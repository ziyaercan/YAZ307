#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include <iostream>
#include <string>

class Dog : public Animal
{
    private:
        std::string m_caretaker;
        std::string m_type;
        static int s_counter;

    public:
        Dog(std::string name, 
            int age, 
            bool isFemale,
            std::string caretaker,
            std::string type):
            Animal{name, age, isFemale, "Dog"},
            m_caretaker{caretaker}, m_type{type}
            {
                std::cout<<"Dog record is created\n";
                s_counter++;
            }
        
        ~Dog()
        {
            std::cout<<"The dog object is destructed\n";
            s_counter--;
        }


        static int getCounter() {return s_counter;}
        void print(int);
        virtual void print();
        virtual void speak();

};

#endif