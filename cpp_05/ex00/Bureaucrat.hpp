
#ifndef BUREAUCRAFT_HPP
#define BUREAUCRAFT_HPP

#include <exception>
#include <iostream>

class Bureaucrat {
public:
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    virtual ~Bureaucrat();
    Bureaucrat & operator=(const Bureaucrat &assign);

    const std::string &getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception {
    public:
        const char * what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char * what() const throw();
    };

    friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucraft);

private:
    Bureaucrat();
    const std::string _name;
    int _grade;
};

#endif //BUREAUCRAFT_HPP
