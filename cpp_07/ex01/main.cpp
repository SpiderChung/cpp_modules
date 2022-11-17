//
// Created by Spider Chung on 11/18/22.
//

#include "iter.hpp"

int main() {
    int array[] = {-5, 8, 10, 15, 3};
    iter(array, sizeof(array)/ sizeof(int), print);

    std::cout << "--------------------------" << std::endl;

    std::string array1[] = {"hello", "my", "friend"};
    iter(array1, sizeof(array1)/ sizeof(std::string), print);

    std::cout << "--------------------------" << std::endl;

    float array2[] = {78.45f, 52.69f, 85.1f};
    iter(array2, sizeof(array2)/ sizeof(float), print);

    return 0;
}
