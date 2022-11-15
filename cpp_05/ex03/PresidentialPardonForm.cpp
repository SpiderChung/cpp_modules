//
// Created by Spider Chung on 11/14/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
        Form(target, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :
        Form(copy), _target(copy._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assign) {
    if (this != &assign) {
        this->Form::operator=(assign);
        this->_target = assign._target;
    }
    return *this;
}

const std::string &PresidentialPardonForm::getTarget() const {
    return _target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (!this->isIsSigned())
        throw Form::NotSignedException();
    if (executor.getGrade() > this->getExecuteGrade())
        throw Bureaucrat::GradeTooLowException();
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
