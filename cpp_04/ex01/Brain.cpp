//
// Created by Spider Chung on 11/9/22.
//

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = "";
    }
    this->_index = 0;
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
    this->_index = brain._index;
    return (*this);
}

void Brain::setIdea(std::string idea) {
    if (this->_index == 100) {
        this->_index = 0;
    }
    this->_ideas[this->_index] = idea;
    this->_index++;
}

void Brain::printInfo() {
    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (this->_ideas[i].size() != 0) {
            std::cout << _ideas[i] << std::endl;
            count = 1;
        }
    }
    if (count == 0) {
        std::cout << "There are no ideas" << std::endl;
    }
}
