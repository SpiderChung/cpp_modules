#include "Bureaucrat.hpp"

int main() {
    {
        std::cout << "---------------------------------" << std::endl;
        try {
            Form A("A", 10, 180);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        try {
            Form B("B", 0, 120);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "---------------------------------" << std::endl;
        Bureaucrat C("C", 20);
        Bureaucrat D("D", 2);
        Form E("E", 10, 15);
        std::cout << E << std::endl;
        C.signForm(E);
        D.signForm(E);
    }
    {
        std::cout << "---------------------------------" << std::endl;
        try {
            Bureaucrat F("F", 30);
            Form G("G", 20, 10);
            G.beSigned(F);
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}
