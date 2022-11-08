//
// Created by Spider Chung on 11/8/22.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    virtual ~Cat();
    Cat &operator=(const Cat cat);
    Cat(const Cat &cat);
    virtual void makeSound() const;
};


#endif //CAT_HPP
