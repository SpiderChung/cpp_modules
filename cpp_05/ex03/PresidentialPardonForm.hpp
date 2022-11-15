//
// Created by Spider Chung on 11/14/22.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();

    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);

    const std::string &getTarget() const;

    void execute(const Bureaucrat &executor) const;

private:
    std::string _target;
};


#endif //PRESIDENTIALPARDONFORM_HPP
