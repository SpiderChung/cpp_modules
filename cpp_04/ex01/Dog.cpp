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
    this->brain = new Brain();
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(const Dog dog) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &dog) {
        this->type = dog.type;
        if (dog.brain) {
            delete this->brain;
            this->brain = new Brain(*dog.brain);
        }
    }
    return (*this);
}

Dog::Dog(const Dog &dog) {
    std::cout << "Dog copy constructor called" << std::endl;
    type = dog.type;
}

void Dog::setIdea(std::string idea) {
    this->brain->setIdea(idea);
}

void Dog::printInfo() {
    this->brain->printInfo();
}

Animal &Dog::operator=(const Animal &origin) {
    std::cout << "Animal/Dog assignment operator called" << std::endl;
    if (this == &origin)
        return (*this);
    this->type = origin.getType();
    *(this->brain) = *(origin.getBrain());
    return *this;
}

Brain *Dog::getBrain() const {
    return (this->brain);
}
