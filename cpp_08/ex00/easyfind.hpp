//
// Created by Spider Chung on 11/18/22.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>
#include <set>

class NotFoundException : public std::exception {
public:
    const char* what() const throw() {
        return "Not found";
    }
};

template<typename T>
typename T::iterator easyfind(T& container, int b) {
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), b);
    if (it != container.end()) {
        std::cout << "Found" << std::endl;
        std::cout << *it << std::endl;
        return it;
    }
    throw NotFoundException();
}

template<typename T>
void print(T& container) {
    typename T::iterator it;
    it = container.begin();
    while (it != container.end()) {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
}

#endif //EASYFIND_HPP
