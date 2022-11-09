//
// Created by Spider Chung on 11/8/22.
//

#include "Dog.hpp"

void Dog::makeSound() const {
    std::cout << "The dog barks" << std::endl;
}

Dog::Dog() {
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog dog) {
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = dog.type;
    return (*this);
}

Dog::Dog(const Dog &dog) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}
