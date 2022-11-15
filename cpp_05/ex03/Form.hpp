#ifndef FORM_HPP
#define FORM_HPP

#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
    Form(const std::string &name, const int signGrade, const int executeGrade);
    virtual ~Form();

    Form(const Form &copy);
    Form &operator=(const Form &assign);

    const std::string &getName() const;
    bool isIsSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;

    void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException : public std::exception {
    public:
        const char * what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char * what() const throw();
    };

    class NotSignedException : public std::exception {
    public:
        const char * what() const throw();
    };
private:
    const std::string _name;
    bool _isSigned;
    const int _signGrade;
    const int _executeGrade;
};

std::ostream &operator<<(std::ostream &os, const Form &form);


#endif //CPP_MODULES_FORM_HPP
