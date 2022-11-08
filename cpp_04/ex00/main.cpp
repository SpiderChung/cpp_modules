#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << meta->getType() << "\n";
    delete meta;
    delete j;
    delete i;
    WrongAnimal *animal = new WrongAnimal();
    WrongAnimal *cat = new WrongCat();
    std::cout << animal->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    animal->makeSound();
    cat->makeSound();
    delete animal;
    delete cat;
    return 0;
}
