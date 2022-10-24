#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-specialketchup "
                 "burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. "
                 "You didn’t put enough bacon in my burger! "
                 "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon "
                 "for free. I’ve been coming for years whereas "
                 "you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the "
                 "manager now." << std::endl;
}

void Harl::filter(std::string level)
{
    int i;
    std::string harlLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (i = 0; i < 4; ++i) {
        if (level == harlLevels[i])
            break;
    }
    switch(i) {
        case 0:
          Harl::debug();
          std::cout << std::endl;
        case 1:
          Harl::info();
          std::cout << std::endl;
        case 2:
          Harl::warning();
          std::cout << std::endl;
        case 3:
          Harl::error();
          break;
        default:
          std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
      }
}
