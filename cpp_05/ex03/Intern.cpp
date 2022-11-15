//
// Created by Spider Chung on 11/15/22.
//

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &assign) {
    (void)assign;
    return *this;
}

Intern::Intern(const Intern &copy) {
    *this = copy;
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {
    Form *res = NULL;
    std::string form[3] = {"shrubbery creation",
                           "robotomy request",
                           "presidental pardon"};
    int i;
    for (i = 0; i < 3 && form[i] != formName; i++);

    switch (i) {
        case 0: {
            res = new ShrubberyCreationForm(formTarget);
            std::cout << "Intern creates " << res->getName() << std::endl;
            return res;
        }
        case 1: {
            res = new RobotomyRequestForm(formTarget);
            std::cout << "Intern creates " << res->getName() << std::endl;
            return res;
        }
        case 2: {
            res = new PresidentialPardonForm(formTarget);
            std::cout << "Intern creates " << res->getName() << std::endl;
            return res;
        }
        default:
            throw FormDoesNotExistException();

    }

    return NULL;
}

const char *Intern::FormDoesNotExistException::what() const throw() {
    return "Intern::FormDoesNotExistException";
}
