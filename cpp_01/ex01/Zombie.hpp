#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "iostream"
#include "string"

class Zombie {
private:
    std::string _name;
public:
    Zombie *_zombies;
    Zombie();
    ~Zombie();
    Zombie(std::string name);
    void        announce(void) const;
    std::string getName(void) const;
    void        setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif //ZOMBIE_HPP
