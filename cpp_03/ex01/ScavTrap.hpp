#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
    static const int _maxHits = 100;
    int guard;
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &other);
    ScavTrap &operator=(ScavTrap const &other);
    void guardGate();

    void attack(const std::string &target);
};

#endif //SCAVTRAP_HPP
