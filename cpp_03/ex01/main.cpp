#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Clap");
    ClapTrap trap("Trap");
    ScavTrap paul("Paul");
    ScavTrap rhino("Rhino");

    clap.attack(trap.getName());
    trap.takeDamage(paul.getAttack());
    trap.beRepaired(3);
    trap.takeDamage(5);
    paul.attack(clap.getName());
    paul.takeDamage(3);
    paul.beRepaired(3);
    trap.printInfo();
    clap.printInfo();
    paul.printInfo();



    return (0);
}

