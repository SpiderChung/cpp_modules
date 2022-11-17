//
// Created by Spider Chung on 11/18/22.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
private:
    T* array;
    unsigned int length;

public:
    Array() : array(new T[0]), length(0) {};
    Array(unsigned int n) : array(new T[n]), length(n) {};

    Array(const Array &copy) : array(nullptr) {
        *this = copy;
    };

    virtual ~Array() {
        delete[] array;
    }

    Array& operator=(const Array &assign) {
        if (this != &assign) {
            if(array != nullptr)
                delete[] array;
            this->length = assign.length;
            this->array = new T[assign.length];
            for(unsigned int i = 0; i < length; ++i)
                array[i] = assign.array[i];
        }
        return *this;
    }

    T& operator[](unsigned int index) {
        if (index >= length)
            throw std::out_of_range("Index is out of bounds");
        return array[index];
    }

    unsigned int size() const {
        return length;
    }

    void printArray() {
        for (unsigned int i = 0; i < length; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

#endif //ARRAY_HPP
