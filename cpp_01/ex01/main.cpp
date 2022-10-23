#include "Zombie.hpp"

int main(void)
{
    int N = 10;

    Zombie *zombie = zombieHorde(N, "beta_zombie");
    for (int i = 0; i < N; ++i) {
        zombie[i].announce();
    }
    delete [] zombie;
    return (0);
}


