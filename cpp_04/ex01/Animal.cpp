//
// Created by Spider Chung on 11/8/22.
//

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal) {
    std::cout << "Animal assignment operator called" << std::endl;
    this->type = animal.type;
    return (*this);
}

Animal::Animal(const Animal &animal) {
    std::cout << "Animal copy constructor called" << std::endl;
    type = animal.type;
}

void Animal::makeSound() const {
    std::cout << "Animal makes a sound" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::printInfo() {}

void Animal::setIdea(std::string) {}

