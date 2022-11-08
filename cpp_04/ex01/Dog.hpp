//
// Created by Spider Chung on 11/8/22.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    ~Dog();
    Dog &operator=(const Dog dog);
    Dog(const Dog &dog);
    virtual void makeSound() const;

};


#endif //DOG_HPP
