//
// Created by Spider Chung on 11/8/22.
//

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <iomanip>

class WrongAnimal {
protected:
    std::string type;

public:
    ~WrongAnimal();
    WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal wrongAnimal);
    WrongAnimal(const WrongAnimal &wrongAnimal);

    void makeSound() const;
    std::string getType() const;
};


#endif //WRONGANIMAL_HPP
