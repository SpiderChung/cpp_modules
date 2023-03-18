//
// Created by Spider Chung on 3/17/23.
//

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    (void)argv;
    if (argc != 2) {
        std::cout << "Error: could not open file." << std::endl;
        exit(1);
    }
    std::map<std::string, double> _data = readData();
    checkInput(argv[1], _data);

    return 0;
}

