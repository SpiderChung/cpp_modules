//
// Created by Spider Chung on 11/17/22.
//

#include "Base.hpp"

Base::~Base() {}

Base *generate(void) {
    srand(time(NULL));
    int r = rand() % 3;
    switch (r) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    }
}

void identify(Base *p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A class object" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B class object" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C class object" << std::endl;
}

void identify(Base &p) {
    try {
        A object = dynamic_cast<A&>(p);
        std::cout << "A class object" << std::endl;
    } catch (std::exception &e) {
        try {
            B object = dynamic_cast<B&>(p);
            std::cout << "B class object" << std::endl;
        } catch (std::exception &e) {
            std::cout << "C class object" << std::endl;
        }
    }
}
