#include "DiamondTrap.hpp"

//DiamondTrap::DiamondTrap() {
//    std::cout << "the DiamondTrap constructor called\n";
//    this->_name = "_";
//    ClapTrap::_name = this->_name + "clap_name";
//    setHitPoints(FragTrap::getHP());
//    setEnergy(ScavTrap::getEnergy());
//    setAttack(FragTrap::getAttack());
//}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor " << this->getName()
              << " called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
    std::cout << "DiamondTrap constructor " << this->getName()
              << " called" << std::endl;
    this->_name = name;
    ClapTrap::_name = this->_name + "_clap_name";
    setHitPoints(FragTrap::getHP());
    setEnergy(ScavTrap::getEnergy());
    setAttack(FragTrap::getAttack());
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    std::cout << "DiamondTrap copy assignment called" << std::endl;
    setName(other.getName());
    setHitPoints(other.getHP());
    setAttack(other.getAttack());
    setEnergy(other.getEnergy());
    return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = other;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << this->_name << " clapTrap name : " <<
              ClapTrap::_name << " HP : " << this->getHP() << " Energy: " <<
              this->getEnergy() << " attackDamage: " << this->getAttack() <<
              std::endl;
}
