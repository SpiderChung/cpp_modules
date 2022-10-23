#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include "iostream"

class HumanB {
private:
    Weapon *_weapon;
    std::string _name;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon &weapon);
    Weapon &getWeapon(void);
};

#endif //HUMANB_HPP
