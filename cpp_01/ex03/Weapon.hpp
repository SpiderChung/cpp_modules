#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "iostream"

class Weapon {
private:
    std::string _type;
public:
    Weapon(std::string type);
    std::string const &getType(void);
    void    setType(std::string);
};

#endif //WEAPON_HPP
