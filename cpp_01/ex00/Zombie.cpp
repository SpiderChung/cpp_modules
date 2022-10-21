#include "Zombie.hpp"

Zombie::Zombie(): _name("anonymous")
{
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << getName() << " died" << std::endl;
}

void Zombie::announce() const
{
    std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName() const
{
    return (this->_name);
}
