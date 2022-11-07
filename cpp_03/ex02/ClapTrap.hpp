#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
    std::string     _name;
    unsigned int    _hit_points;
    unsigned int    _energy;
    unsigned int    _attack;

public:
    ClapTrap(std::string name);
    ClapTrap();
    ~ClapTrap();

    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);

    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName() const;
    unsigned int getHP() const;
    unsigned int getEnergy() const;
    unsigned int getAttack() const;
    void printInfo();

    void setName(const std::string &name);

    void setHitPoints(unsigned int hitPoints);

    void setEnergy(unsigned int energy);

    void setAttack(unsigned int attack);

};


#endif //CLAPTRAP_HPP
