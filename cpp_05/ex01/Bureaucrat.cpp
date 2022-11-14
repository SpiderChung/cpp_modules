//
// Created by Spider Chung on 11/14/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) {

    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

const std::string &Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucraft) {
    os <<  bureaucraft.getName() << ", Bureaucraft grade "
            << bureaucraft.getGrade() << ".";
    return os;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign) {
    if (this != &assign) {
        (std::string) this->_name = assign._name;
        this->_grade = assign._grade;
    }
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade){}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat::GradeTooLowException";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat::GradeTooHighException";
}

void Bureaucrat::incrementGrade() {
    if (_grade == 150)
        throw Bureaucrat::GradeTooHighException();
    ++_grade;
}

void Bureaucrat::decrementGrade() {
    if (_grade == 1)
        throw Bureaucrat::GradeTooLowException();
    --_grade;
}

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    } catch (std::exception & e) {
        std::cout << _name << " couldn't sign " << form.getName()
                << " because " << e.what() << std::endl;
    }
}


