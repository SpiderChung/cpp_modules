#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *temp = new Zombie[N];
    for(int i = 0; i < N; i++)
        temp[i].setName(name);
    return (temp);
}
