//
// Created by Spider Chung on 11/14/22.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm {
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &target);

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);

    const std::string &getTarget() const;

    class FileNotOpened : public std::exception {
    public:
        const char * what() const throw();
    };



private:
    std::string target;
};


#endif //SHRUBBERYCREATIONFORM_HPP
