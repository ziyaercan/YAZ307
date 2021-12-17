#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"


void report(Animal& animal)
{
    animal.print();
    std::cout<<animal.getFamily()<<" speaks ";
    animal.speak();
}

int main()
{   
    Dog dog1{};

    Cat cat1{"Serafettin", 2, true, "Ziya", "Sokak Kedisi"};
    Animal* p_animal{&cat1};

    p_animal->print();

    // Animal* animals[] {&dog1, &cat1};

    // for(const auto animal:animals)
    // {
    //     report(*animal);
    // }
    




   
    return 0;
} 

