#include "Bureaucrat.hpp"

int main() {
    Bureaucrat one = Bureaucrat("Alex", 1);
    Bureaucrat two = Bureaucrat("Scott", 150);
    std::cout << one << std::endl;
    std::cout << two << std::endl;

    try {
        Bureaucrat three = Bureaucrat("John", 0);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat three = Bureaucrat("Mike", 151);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        one.decrementGrade();
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        two.incrementGrade();
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}
