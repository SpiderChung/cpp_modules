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
    virtual Animal	&operator=( const Animal & origin );

    void makeSound() const;
    void setIdea(std::string idea);
    void printInfo();
    Brain *getBrain(void) const;

};

#endif //DOG_HPP
