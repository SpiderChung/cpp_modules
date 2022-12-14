#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    std::cout << "---------------------------------" << std::endl;
    Form *A = new PresidentialPardonForm("A");
    Form *B = new RobotomyRequestForm("B");
    Form *C = new ShrubberyCreationForm("C");

    std::cout << *A << std::endl;
    std::cout << *B << std::endl;
    std::cout << *C << std::endl;

    std::cout << "---------------------------------" << std::endl;
    Bureaucrat Mike ("Mike", 6);
    std::cout << Mike << std::endl;
    std::cout << "---------------------------------" << std::endl;
    Mike.signForm(*A);
    Mike.signForm(*B);
    Mike.signForm(*C);
    std::cout << "---------------------------------" << std::endl;
    Mike.executeForm(*A);
    std::cout << "---------------------------------" << std::endl;
    Mike.incrementGrade();
    std::cout << Mike << std::endl;
    std::cout << "---------------------------------" << std::endl;
    Mike.executeForm(*A);
    std::cout << "---------------------------------" << std::endl;
    Mike.executeForm(*B);
    std::cout << "---------------------------------" << std::endl;
    Mike.executeForm(*C);
    std::cout << "---------------------------------" << std::endl;
    delete A;
    delete B;
    delete C;

    return 0;

}
