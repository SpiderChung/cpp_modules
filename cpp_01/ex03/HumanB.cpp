#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
    std::cout << this->_name << " was destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}


void HumanB::attack()
{
    if (!_weapon)
        std::cout << _name << " tries to attack but has no weapon"
                << std::endl;
    else
        std::cout << _name << " attacks with their "
                    << _weapon->getType() << std::endl;
}
