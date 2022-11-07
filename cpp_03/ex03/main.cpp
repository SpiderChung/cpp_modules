#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamondTrap("Diamond");
    ClapTrap clapTrap("Clap");

    diamondTrap.whoAmI();
    diamondTrap.attack(clapTrap.getName());
    diamondTrap.takeDamage(10);
    diamondTrap.beRepaired(1);
    diamondTrap.whoAmI();
    diamondTrap.printInfo();

    return (0);
}

