//
// Created by Spider Chung on 11/17/22.
//

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, int arrayLength, void (*function)(T&)) {
    for(int i = 0; i < arrayLength; ++i) {
        function(array[i]);
    }
}

template<typename S>
void print(S& val) {
    std::cout << val << std::endl;
}

#endif //CPP_MODULES_ITER_HPP
