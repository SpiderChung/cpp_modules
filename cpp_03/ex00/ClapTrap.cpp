#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _hit_points(10), _energy(10), _attack(0)
{
    this->_name = name;
    std::cout << "Constructor called" << std::endl;
    printInfo();
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called from " + this->_name << std::endl;
}

void ClapTrap::printInfo()
{
    std::cout << "name: " << this->_name << " hp: " << this->_hit_points
            << " energy: " << this->_energy << std::endl;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor is called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_hit_points = other.getHP();
    this->_attack = other.getAttack();
    this->_energy = other.getEnergy();
    this->_name = other.getName();
    return (*this);
}

std::string ClapTrap::getName() const
{
    return (this->_name);
}

unsigned int ClapTrap::getEnergy() const
{
    return (this->_energy);
}

unsigned int ClapTrap::getAttack() const
{
    return (this->_attack);
}

unsigned int ClapTrap::getHP() const
{
    return (this->_hit_points);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points > 0) {
        if (this->_hit_points < amount)
            this->_hit_points = 0;
        else
            this->_hit_points -= amount;
        std::cout << this->_name << " received damage" << std::endl;
    }

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getHP() < 1)
    {
        std::cout << this->getName() << " died" << std::endl;
        return;
    }
    if (this->_hit_points < 10) {
        if (this->_hit_points + amount > 10)
            this->_hit_points = 10;
        else
            this->_hit_points += amount;
        std::cout << this->_name << " recovered" << std::endl;
    }
    this->_energy -= 1;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->getHP() < 1)
    {
        std::cout << this->getName() << " died" << std::endl;
        return;
    }
    if (this->getEnergy() > 0)
    {
        std::cout << "ClapTrap " << this->getName() << " attacks "
            << target << ", causing " << this->getAttack()
            << " points of damage" << std::endl;
        this->_energy -= 1;
    } else {
        std::cout << "There is no energy" << std::endl;
    }
}

void ClapTrap::setName(const std::string target)
{
    this->_name = target;
}


