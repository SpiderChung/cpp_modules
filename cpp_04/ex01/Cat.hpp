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
    virtual Animal	&operator=( const Animal & origin );

    void makeSound() const;
    void setIdea(std::string idea);
    void printInfo();
    Brain *getBrain(void) const;

};


#endif //CAT_HPP
