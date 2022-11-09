//
// Created by Spider Chung on 11/9/22.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
public:
    Brain();
    ~Brain();
    Brain(const Brain &brain);
    Brain &operator=(const Brain brain);
    void setIdea(std::string idea);
    void printInfo();

private:
    std::string _ideas[100];
    int _index;
};


#endif //BRAIN_HPP
