//
// Created by Spider Chung on 11/18/22.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() {};
    virtual ~MutantStack() {};

    MutantStack(MutantStack const &copy)
    {
        *this = copy;
    }
    MutantStack &operator=(MutantStack const &assign) {
        if (this != &assign)
            this->c = assign.c;
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() {
        return (this->c.begin());
    }

    iterator end() {
        return (this->c.end());
    }
};

#endif //MUTANTSTACK_HPP
