#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;
        delete i;
        std::cout << "---------------" << std::endl;
        std::cout << "---------------" << std::endl;
    }

    {
        Animal *animalArray[10];

        for (int i = 0; i < 5; i++) {
            std::cout << i + 1 << std::endl;
            animalArray[i] = new Dog();
            animalArray[i]->makeSound();
        }
        for (int i = 4; i < 10; i++) {
            std::cout << i + 1 << std::endl;
            animalArray[i] = new Cat();
            animalArray[i]->makeSound();
        }
        std::cout << "---------------" << std::endl;
        for (int i = 0; i < 10; i++) {
            delete animalArray[i];
        }
    }
    {
        std::cout << "---------------" << std::endl;
        std::cout << "---------------" << std::endl;
        Dog b;
        {
            Dog tmp = b;
            std::cout << &tmp << std::endl;
            std::cout << &b << std::endl;
        }
    }
    return 0;

}
