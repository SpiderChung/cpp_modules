#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {

    Animal *animals[10];
    for (int i = 0; i < 10; i++){
        if (i < 5){
            animals[i] = new Dog();
        }
        else {
            animals[i] = new Cat();
        }
        animals[i]->makeSound();
    }
    animals[0]->setIdea("Somebody");
    animals[0]->setIdea("to");
    animals[0]->setIdea("love");
    std::cout << animals[0]->getType() << std::endl;
    animals[0]->printInfo();
    std::cout << "Copying" << std::endl;
    std::cout << "==============" << std::endl;
    std::cout << animals[9]->getType() << std::endl;
    animals[9]->printInfo();
    std::cout << animals[0]->getType() << std::endl;
    animals[0]->printInfo();
//    delete animals[9];
    std::cout << "After copying" << std::endl;
    std::cout << "==============" << std::endl;
    *(animals[9]) = *(animals[0]);
    Animal *xer1 = new Dog();
    Animal *xer2 = new Dog();
    std::cout << &
    *xer1 = *xer2;

    std::cout << animals[9]->getType() << std::endl;
    animals[9]->printInfo();
    animals[9]->setIdea("me");
    std::cout << "==============" << std::endl;
    std::cout << animals[9]->getType() << std::endl;
    animals[9]->printInfo();
    std::cout << "==============" << std::endl;
    std::cout << animals[0]->getType() << std::endl;
    animals[0]->printInfo();
    for (int i = 0; i < 10; i++)
    {
        delete animals[i];
    }
    return 0;
}
