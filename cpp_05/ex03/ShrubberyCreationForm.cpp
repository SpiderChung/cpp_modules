//
// Created by Spider Chung on 11/14/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
    Form(target, 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const std::string &ShrubberyCreationForm::getTarget() const {
    return _target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign) {
    if (this != &assign) {
        this->Form::operator=(assign);
        this->_target = assign._target;
    }
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
        Form(copy), _target(copy._target) {}

const char *ShrubberyCreationForm::FileNotOpened::what() const throw() {
    return "ShrubberyCreationForm::FileNotOpened";
}


void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    std::ofstream os;
    if (!this->isIsSigned())
        throw Form::NotSignedException();
    if (executor.getGrade() > this->getExecuteGrade())
        throw Bureaucrat::GradeTooLowException();
    os.open(this->_target + "_shrubbery");
    if (!os.is_open())
        throw ShrubberyCreationForm::FileNotOpened();
    else {
        os << "    oxoxoo    ooxoo" << std::endl
           << "  ooxoxo oo  oxoxooo" << std::endl
           << " oooo xxoxoo ooo ooox" << std::endl
           << " oxo o oxoxo  xoxxoxo" << std::endl
           << "  oxo xooxoooo o ooo" << std::endl
           << "    ooo\\oo\\  /o/o" << std::endl
           << "        \\  \\/ /" << std::endl
           << "         |   /" << std::endl
           << "         |  |" << std::endl
           << "         | D|" << std::endl
           << "         |  |" << std::endl
           << "         |  |" << std::endl
           << "  ______/____\\____" << std::endl;
        os.close();
    }
}
