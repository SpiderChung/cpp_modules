#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
private:
    std::string _name;

public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap &operator=(DiamondTrap const &other);
    DiamondTrap(const DiamondTrap &other);

    void attack(const std::string &target);
    void whoAmI();
};

#endif //DIAMONDTRAP_HPP
