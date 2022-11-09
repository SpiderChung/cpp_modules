//
// Created by Spider Chung on 11/8/22.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain *brain;
public:
    Cat();
    ~Cat();
    Cat &operator=(const Cat cat);
    Cat(const Cat &cat);
    virtual void makeSound() const;
    virtual void setIdea(std::string idea);
    virtual void printInfo();
};


#endif //CAT_HPP
