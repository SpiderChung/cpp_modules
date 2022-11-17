//
// Created by Spider Chung on 11/17/22.
//

#include "Base.hpp"

int main() {
    Base *b = generate();

    identify(b);
    identify(*b);
    identify(NULL);

    delete b;

    return 0;
}
