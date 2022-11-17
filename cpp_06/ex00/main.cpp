//
// Created by Spider Chung on 11/16/22.
//

#include "main.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2) {
        std::cout << "Wrong arguments: need char, int, float or double" << std::endl;
        return 1;
    }
    char *str;
    std::cout << std::setprecision(1);
    std::cout << std::fixed;

    long double ld = strtold(argv[1], &str);
    double d = strtod(argv[1], &str);
    char c = static_cast<char>(d);
    int i = static_cast<int>(d);
    float f = static_cast<float>(d);

    if (d == 0.0 && strlen(str) == 1) {
        d = static_cast<double>(*str);
        c = static_cast<char>(*str);
        i = static_cast<int>(*str);
        f = static_cast<float>(*str);
    } else if (strlen(str) > 1 || (strlen(str) == 1 && strcmp(str, "f"))) {
        std::cout << "Argument is not scalar" << std::endl;
        return 1;
    }

    if (isinf(d) || isnan(d) || d < 0 || d > 255)
        std::cout << "char: impossible" << std::endl;
    else if(i < 32)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;

    if (isinf(d) || isnan(d) || d < -2147483648 || d > 2147483647)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;

    if ((d < -3.40282e+38 || d > 3.40282e+38))
       std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << f << "f" << std::endl;

    if(ld < -1.79769e+308 || ld > 1.79769e+308)
    std::cout << "double: impossible" << std::endl;
    else
    std::cout << "double: " << d << std::endl;

    return 0;


}
