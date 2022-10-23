#ifndef REPLACE_H
#define REPLACE_H

#include <string>
#include <fstream>

class Replace {
private:
    std::string filename;
    std::string str1;
    std::string str2;

public:
    Replace(std::string filename, std::string str1, std::string str2);
    ~Replace();
    void replace(void);

};


#endif //REPLACE_H
