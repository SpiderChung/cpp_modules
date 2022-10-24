#ifndef REPLACE_H
#define REPLACE_H

#include <fstream>
#include <iostream>

class Replace {
private:
    std::string filename;
    std::string str1;
    std::string str2;

public:
    Replace(std::string filename, std::string str1, std::string str2);
    ~Replace();
    void replace(void);
    void check_in(std::string &str);
};

#endif //REPLACE_H
