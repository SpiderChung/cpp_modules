#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "Default FragTrap constructor called" << std::endl;
    setHitPoints(100);
    setEnergy(100);
    setAttack(30);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor " << this->getName()
              << " called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "FragTrap constructor " << this->getName()
                << " called" << std::endl;
    setHitPoints(100);
    setEnergy(100);
    setAttack(30);
}

FragTrap::FragTrap(const FragTrap &other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    std::cout << "FragTrap copy assignment called" << std::endl;
    setName(other.getName());
    setEnergy(other.getEnergy());
    setAttack(other.getAttack());
    setHitPoints(other.getHP());
    return (*this);
}

void FragTrap::attack(const std::string &target) {
    ClapTrap::attack(target);
}

void FragTrap::highFivesGuys(void) {
    std::cout << this->getName() << " gave me five!" << std::endl;
}
