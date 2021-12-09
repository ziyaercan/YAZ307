#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
class Animal
{
    private:
        static int s_counter;
        std::string m_name;
        int m_age;
        bool m_isFemale;
        std::string m_family;

    public:
        Animal()
        {
            std::cout<<"Animal record is created\n";
            s_counter++;
        }
        Animal(std::string name, 
               int age, 
               bool isFemale,
               std::string family):
        m_name{name}, m_age{age}, m_isFemale{isFemale}, m_family{family}
        {
            std::cout<<"Animal record is created\n";
            s_counter++;
        }

        ~Animal()
        {
            std::cout<<"The animal object is destructed\n";
            s_counter--;
        }

        virtual void print();
        std::string getName() const { return m_name;}
        int getAge() const { return m_age;}
        bool isFemale() const {return m_isFemale;}
        std::string getFamily() const { return m_family;}
        virtual void speak();
        static int getCounter() {return s_counter;}

};

#endif
