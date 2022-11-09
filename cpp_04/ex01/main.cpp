#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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
    animals[0]->setIdea("Hello");
    animals[0]->setIdea("World");
    animals[0]->setIdea("mmmmm\n");
    std::cout << animals[0]->getType() << "\n";
    animals[0]->printInfo();
    std::cout << "before copying\n";
    std::cout << animals[9]->getType() << "\n";
    animals[9]->printInfo();
    delete animals[9];
    std::cout << "after copying\n";
    animals[9] = animals[0];
    std::cout << animals[9]->getType() << "\n";
    animals[9]->printInfo();
    for (int i = 0; i < 9; i++)
        delete animals[i];
    return 0;
}
