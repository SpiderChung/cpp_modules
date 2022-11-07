#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "Default ScavTrap constructor called" << std::endl;
    this->setName("Default");
    this->setAttack(20);
    this->setEnergy(50);
    this->setHitPoints(100);
    this->guard = 0;

}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor " << this->getName()
                << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap constructor " << name << " called" << std::endl;
    this->setName(name);
    this->setAttack(20);
    this->setEnergy(50);
    this->setHitPoints(100);
    this->guard = 0;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap copy assignment called" << std::endl;
    this->setName(other.getName());
    this->setAttack(other.getAttack());
    this->setEnergy(other.getEnergy());
    this->setHitPoints(other.getHP());
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &other) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

void ScavTrap::guardGate() {
    if (this->guard == 1) {
        this->guard = 0;
        std::cout << this->getName() << " isn't in Gate keeper mode"
                    << std::endl;
    } else if (this->guard == 0) {
        this->guard = 1;
        std::cout << this->getName() << " is now in Gate keeper mode"
                  << std::endl;
    }
}

void ScavTrap::attack(const std::string &target) {
    if (this->getHP() < 1)
    {
        std::cout << this->getName() << " died" << std::endl;
        return;
    }
    if (this->getEnergy() > 0)
    {
        std::cout << "ScavTrap " << this->getName() << " attacks "
                  << target << ", causing " << this->getAttack()
                  << " points of damage" << std::endl;
        this->setEnergy(this->getEnergy() - 1);
    } else {
        std::cout << "There is no energy" << std::endl;
    }
}

