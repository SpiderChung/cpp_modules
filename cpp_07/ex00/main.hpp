//
// Created by Spider Chung on 11/17/22.
//

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min(T a, T b) {
    return (a < b ? a : b);
}

template<typename T>
T max(T a, T b) {
    return (a > b ? a : b);
}

#endif //MAIN_HPP
