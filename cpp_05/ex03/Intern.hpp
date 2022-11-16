//
// Created by Spider Chung on 11/15/22.
//

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
    Intern();
    ~Intern();

    Intern &operator=(const Intern &assign);
    Intern(const Intern &copy);

    Form *makeForm(std::string formName, std::string formTarget);

    class FormDoesNotExistException : public std::exception {
    public:
        const char *what() const throw();
    };
};

#endif //INTERN_HPP
