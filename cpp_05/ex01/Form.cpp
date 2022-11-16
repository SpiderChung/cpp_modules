#include "Form.hpp"
#include "../ex02/Form.hpp"


Form::Form(const std::string &name, const int signGrade, const int executeGrade) :
    _name(name), _signGrade(signGrade), _executeGrade(executeGrade) {
    if (signGrade > 150 || executeGrade > 150)
        throw Form::GradeTooLowException();
    if (signGrade < 1 || executeGrade < 1)
        throw Form::GradeTooHighException();
}

Form::~Form() {}

const std::string &Form::getName() const {
    return _name;
}

bool Form::isIsSigned() const {
    return _isSigned;
}

int Form::getExecuteGrade() const {
    return _executeGrade;
}

int Form::getSignGrade() const {
    return _signGrade;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Form::GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Form::GradeTooLowException";
}

Form::Form(const Form &copy) : _name(copy._name), _isSigned(copy._isSigned),
                               _signGrade(copy._signGrade), _executeGrade(copy._executeGrade) {}

Form &Form::operator=(const Form &assign) {
    if (this != &assign) {
        (std::string) this->_name = assign._name;
        this->_isSigned = assign._isSigned;
    }
    return *this;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (this->_isSigned == true) {
        std::cout << this->_name << " already signed!" << std::endl;
        return;
    }
    if (bureaucrat.getGrade() <= this->_signGrade)
        this->_isSigned = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "Form name: " << form.getName() << ", form status: "
                << (form.isIsSigned() ? "signed" : "not signed")
                    << ", sign grade: " << form.getSignGrade()
                    << ", execute grade: " << form.getExecuteGrade();
    return os;
}
