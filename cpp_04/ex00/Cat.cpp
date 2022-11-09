//
// Created by Spider Chung on 11/8/22.
//

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "The cat meows" << std::endl;
}

Cat &Cat::operator=(const Cat cat) {
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = cat.type;
    return (*this);
}

Cat::Cat(const Cat &cat) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}
