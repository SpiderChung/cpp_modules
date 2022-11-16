//
// Created by Spider Chung on 11/16/22.
//

#ifndef DATA_HPP
#define DATA_HPP

#include <cstdint>
#include <iostream>

struct Data {
    int x;
    std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#endif //DATA_HPP
