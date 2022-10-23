#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: 4 arguments required" << std::endl;
        return (1);
    }
    Replace replace(argc[1], argc[2], argc[3]);
    replace.replace();
    return (0);
}
