//
// Created by Spider Chung on 11/9/22.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Brain {
public:
    Brain();
    ~Brain();
    Brain(const Brain &brain);
    Brain &operator=(const Brain &brain);

private:
    std::string _ideas[100];
};


#endif //BRAIN_HPP
