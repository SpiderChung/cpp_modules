//
// Created by Spider Chung on 11/9/22.
//

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = "";
    }
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &brain) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = brain._ideas[i];
    }
}

Brain &Brain::operator=(const Brain &brain) {
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &brain) {
        for (int i = 0; i < 100; i++) {
            this->_ideas[i] = brain._ideas[i];
        }
    }
    return (*this);
}
