#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(FragTrap const &other);

    void attack(const std::string &target);
    void highFivesGuys(void);

};

#endif //FRAGTRAP_HPP
