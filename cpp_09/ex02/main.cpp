//
// Created by Spider Chung on 3/17/23.
//

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Error: No input sequence provided." << std::endl;
        return EXIT_FAILURE;
    }
    std::vector<int> vec;
    std::list<int> lst;

    for (int i = 1; i < argc; i++) {
        try {
            for (int j = 0; argv[i][j] != '\0'; j++) {
                if (argv[i][j] < 48 || argv[i][j] > 57) {
                    std::cout << "Error: bad input." << std::endl;
                    return EXIT_FAILURE;
                }
            }
            int num = std::atoi(argv[i]);
            if (num <= 0) {
                throw std::invalid_argument("Error: Input sequence must only contain positive integers.");
            }
            vec.push_back(num);
            lst.push_back(num);
        }
        catch (const std::invalid_argument& e) {
            std::cout << e.what() << std::endl;
            return EXIT_FAILURE;
        }
    }

    std::cout << "<vector> Before: ";
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    int nVec = vec.size();
    int nLst = lst.size();

    std::cout << "<list>   Before: ";
    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::clock_t start_vec = std::clock();
    sortVector(vec, 0, nVec - 1);
    std::clock_t end_vec = std::clock();
    double elapsed_vec = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC * 1000000;

    std::clock_t start_lst = std::clock();
    sortList(lst, 0, nLst - 1);
    std::clock_t end_lst = std::clock();
    double elapsed_lst = static_cast<double>(end_lst - start_lst) / CLOCKS_PER_SEC * 1000000;

    std::cout << "<vector> After: ";
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "<list>   After: ";
    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << vec.size()
                << " elements with vector sort: " << elapsed_vec
                << " us" << std::endl;

    std::cout << "Time to process a range of " << lst.size()
              << " elements with list sort: " << elapsed_lst
              << " us" << std::endl;
    return EXIT_SUCCESS;
}

// ./PmergeMe `jot -r 3000 1 100000 \| tr '\n' ' '`
