//
// Created by Spider Chung on 11/8/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called" << std::endl;
    type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat &wrongCat) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat wrongCat) {
    std::cout << "WrongCat assignment operator called" << std::endl;
    this->type = wrongCat.type;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "The wrongCat meows" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

