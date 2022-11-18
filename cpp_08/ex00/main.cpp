//
// Created by Spider Chung on 11/18/22.
//

#include "easyfind.hpp"

int main() {
    std::cout << "-------------Vector-------------" << std::endl;
    std::vector<int> intVector;

    for (int i = 1; i <= 5; ++i) {
        intVector.push_back(i);
    }

    print(intVector);

    try {
        easyfind(intVector, 4);
        easyfind(intVector, 0);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "-------------List-------------" << std::endl;

    std::list<int> list;
    for (int i = 1; i <= 5; ++i) {
        list.push_back(i*10);
    }

    print(list);

    try {
        easyfind(list, 10);
        easyfind(list, -5);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "-------------Set-------------" << std::endl;

    std::set<int> set;

    set.insert(4);
    set.insert(2);
    set.insert(5);
    set.insert(10);
    set.insert(-3);
    set.insert(2);

    print(set);

    try {
        easyfind(set, 5);
        easyfind(set, -5);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
