#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("Clap");
    ClapTrap trap("Trap");
    ScavTrap paul("Paul");
    FragTrap rhino("Rhino");

    clap.attack(trap.getName());
    trap.takeDamage(paul.getAttack());
    rhino.attack(trap.getName());
    trap.beRepaired(3);
    trap.takeDamage(5);
    paul.attack(clap.getName());
    paul.takeDamage(3);
    paul.beRepaired(3);
    rhino.highFivesGuys();
    rhino.takeDamage(12);
    trap.printInfo();
    clap.printInfo();
    paul.printInfo();
    rhino.printInfo();

    return (0);
}

