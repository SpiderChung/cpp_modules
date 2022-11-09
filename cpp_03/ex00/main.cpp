#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Clap");
    ClapTrap trap("Trap");

    clap.attack(trap.getName());
    trap.takeDamage(clap.getAttack());
    trap.beRepaired(3);
    trap.takeDamage(5);
    trap.beRepaired(2);
    trap.printInfo();
    clap.printInfo();

    ClapTrap crap("Crap");
    ClapTrap copy_crap(crap);
    crap.takeDamage(6);
    copy_crap.takeDamage(3);
    crap.attack(copy_crap.getName());
    copy_crap.setName("Trip");
    crap.printInfo();
    copy_crap.printInfo();




    return 0;
}

