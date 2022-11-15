//
// Created by Spider Chung on 11/14/22.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <ctime>

#include "Form.hpp"

class RobotomyRequestForm : public Form{
public:
    RobotomyRequestForm(const std::string &target);
    ~RobotomyRequestForm();

    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);

    const std::string &getTarget() const;

    void execute(const Bureaucrat &executor) const;

private:
    std::string _target;
};


#endif //ROBOTOMYREQUESTFORM_HPP
