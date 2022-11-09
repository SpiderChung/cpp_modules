//
// Created by Spider Chung on 11/8/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "Wrong Animal";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal wrongAnimal) {
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->type = wrongAnimal.type;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = wrongAnimal;
}

void WrongAnimal::makeSound( void ) const {
    std::cout << "WrongAnimal makes sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}
