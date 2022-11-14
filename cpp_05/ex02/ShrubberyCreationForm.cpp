//
// Created by Spider Chung on 11/14/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

const std::string &ShrubberyCreationForm::getTarget() const {
    return target;
}
