//
// Created by Spider Chung on 11/17/22.
//

#ifndef BASE_HPP
#define BASE_HPP

#include <ctime>
#include <iostream>
#include <cstdlib>

class Base {
public:
    virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base *generate(void);

void identify(Base *p);

void identify(Base &p);


#endif //BASE_HPP
