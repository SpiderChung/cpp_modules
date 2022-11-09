//
// Created by Spider Chung on 11/8/22.
//

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const {
    std::cout << "The cat meows" << std::endl;
}

Cat &Cat::operator=(const Cat cat) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &cat) {
        this->type = cat.type;
        if (cat.brain) {
            delete this->brain;
            this->brain = new Brain(*cat.brain);
        }
    }
    return (*this);
}

Cat::Cat(const Cat &cat) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

void Cat::printInfo() {
    this->brain->printInfo();
}

void Cat::setIdea(std::string idea) {
    this->brain->setIdea(idea);
}
