#include "ScavTrap.hpp"

ScavTrap::~ScavTrap() {

}

ScavTrap::ScavTrap() {

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    return <#initializer#>;
}

ScavTrap::ScavTrap(const ScavTrap &other) {

}

void ScavTrap::guardGate() {

}

void ScavTrap::attack(const std::string &target) {
    ClapTrap::attack(target);
}

