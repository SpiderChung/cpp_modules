#include "Replace.hpp"

Replace::Replace(std::string filename, std::string str1, std::string str2)
{
    this->filename = filename;
    this->str1 = str1;
    this->str2 = str2;
}

Replace::~Replace()
{

}

void Replace::check_in(std::string &str)
{
    int i;

    i = str.find(str1);
    while(i != -1)
    {
        str.erase(i, str1.length());
        str.insert(i, str2);
        i = str.find(str1);
    }
}

void Replace::replace()
{
    std::ifstream    inputStream;
    std::string     outFile;
    std::ofstream   outputStream;
    std::string     str;

    if(this->filename.length() == 0 || this->str1.length() == 0
        || this->str2.length() == 0)
    {
        std::cout << "Error: bad arguments" << std::endl;
        exit(EXIT_FAILURE);
    }
    inputStream.open(this->filename);
    if(!inputStream.is_open())
    {
        std::cout << "Error: cannot open input file" << std::endl;
        exit(EXIT_FAILURE);
    }
    inputStream.seekg(0, std::ios::end);
    if(inputStream.tellg() == 0)
    {
        std::cout << "Error: empty file" << std::endl;
        inputStream.close();
        exit(EXIT_FAILURE);
    }
    inputStream.seekg(0, std::ios::beg);
    outFile = filename + ".replace";
    outputStream.open(outFile);
    if(!outputStream.is_open())
    {
        std::cout << "Error: cannot open output file" << std::endl;
        inputStream.close();
        exit(EXIT_FAILURE);
    }
    while(std::getline(inputStream, str))
    {
        check_in(str);
        outputStream << str << std::endl;
    }
    inputStream.close();
    outputStream.close();
}
