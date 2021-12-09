#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

// void report(Dog& dog)
// {
//     std::cout<<dog.getFamily()<<" speaks ";
//     dog.speak();

// }
// void report(Cat& cat)
// {
//     std::cout<<cat.getFamily()<<" speaks ";
//     cat.speak();
// }

void report(Animal& animal)
{
    animal.print();
    std::cout<<animal.getFamily()<<" speaks ";
    animal.speak();
}

int main()
{
    Dog dog1{"Hera", 3, true, "Irem", "CaneCorsa"};
    Cat cat1{"Serafettin", 2, true, "Ziya", "Sokak Kedisi"};

    Animal* animals[] {&dog1, &cat1};

    for(const auto animal:animals)
    {
        report(*animal);
    }
    




   
    return 0;
} 

