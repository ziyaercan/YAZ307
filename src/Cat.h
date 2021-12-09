#ifndef CAT_H
#define CAT_H
#include "Animal.h"
#include <iostream>
#include <string>

class Cat : public Animal
{
    private:
        std::string m_caretaker;
        std::string m_type;
        static int s_counter;

    public:
        Cat(std::string name, 
            int age, 
            bool isFemale,
            std::string caretaker,
            std::string type):
            Animal{name, age, isFemale, "Cat"},
            m_caretaker{caretaker}, m_type{type}
            {
                std::cout<<"Cat record is created\n";
                s_counter++;
            }
        
        ~Cat()
        {
            std::cout<<"The Cat object is destructed\n";
            s_counter--;
        }


        static int getCounter() {return s_counter;}
        void print(int);
        virtual void print();
        virtual void speak();

};

#endif