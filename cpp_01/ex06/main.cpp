#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc == 2)
        harl.filter(argv[1]);
    else
        std::cout << "1 argument required" << std::endl;
    return (0);
}

