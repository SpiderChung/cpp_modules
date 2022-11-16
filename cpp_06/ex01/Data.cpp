//
// Created by Spider Chung on 11/16/22.
//

#include "Data.hpp"

uintptr_t serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}
