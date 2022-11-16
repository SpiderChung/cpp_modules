#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
    std::cout << "---------------------------------" << std::endl;
    Intern intern;
    Form *A;
    Form *B;
    Form *C;

    A = intern.makeForm("shrubbery creation", "D");
    B = intern.makeForm("robotomy request", "E");
    C = intern.makeForm("presidental pardon", "F");

    std::cout << "---------------------------------" << std::endl;
    try {
        Form *X;
        X = intern.makeForm("filkina gramota", "Filya");
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
   }

    std::cout << "---------------------------------" << std::endl;

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
