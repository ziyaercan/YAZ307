#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

/** @brief Base class "Animal"

    This class represents the base class for the app.
    @author Ziya ERCAN
    @date December 2021
    */
class Animal
{
    private:
        static int s_counter; /**< counter (static member) */
        std::string m_name; /**< name of the animal */
        int m_age;
        bool m_isFemale;
        std::string m_family;

    public:
        /** Default constructor. Increases the counter by 1.
            */
        Animal()
        {
            
            std::cout<<"Animal record is created\n";
            s_counter++;
        }
        /** Parametric constructor. Initializes the private members.
            */
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
