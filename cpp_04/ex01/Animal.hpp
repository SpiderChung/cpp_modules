//
// Created by Spider Chung on 11/8/22.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal &operator=(const Animal animal);
    Animal(const Animal &animal);
    std::string getType() const;
    virtual void makeSound() const;
    virtual void setIdea(std::string idea);
    virtual void printInfo();

};

#endif //ANIMAL_HPP
