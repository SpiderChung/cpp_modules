//
// Created by Spider Chung on 11/8/22.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    Brain *brain;
public:
    Dog();
    ~Dog();
    Dog &operator=(const Dog dog);
    Dog(const Dog &dog);
    virtual void makeSound() const;
    virtual void setIdea(std::string idea);
    virtual void printInfo();

};

#endif //DOG_HPP
