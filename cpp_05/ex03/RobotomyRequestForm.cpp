//
// Created by Spider Chung on 11/14/22.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
    Form(target, 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
        Form(copy), _target(copy._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign) {
    if (this != &assign) {
        this->Form::operator=(assign);
        this->_target = assign._target;
    }
    return *this;
}

const std::string &RobotomyRequestForm::getTarget() const {
    return _target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    srand(time(NULL));
    if (!this->isIsSigned())
        throw Form::NotSignedException();
    if (executor.getGrade() > this->getExecuteGrade())
        throw Bureaucrat::GradeTooLowException();
    std::cout << "*Drilling noize*" << std::endl;
    int a = rand() % 100;
    if (a < 50)
        std::cout << _target << " has been robotomized succesfully" << std::endl;
    else
        std::cout << "Robotomy failed" << std::endl;
}
