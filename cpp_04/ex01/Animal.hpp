//
// Created by Spider Chung on 11/8/22.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal {
public:
    Animal();
    virtual ~Animal();
    Animal &operator=(const Animal animal);
    Animal(const Animal &animal);
    virtual void makeSound() const;
    std::string getType() const;

protected:
    std::string type;

};

#endif //ANIMAL_HPP
