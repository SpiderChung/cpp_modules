#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1 = Zombie();
    zombie1.announce();

    Zombie* zombie2 = newZombie("Almaz");
    delete(zombie2);

    Zombie* zombie3 = new Zombie("Roland");
    zombie3->announce();
    zombie3->announce();
    delete(zombie3);

    randomChump("Nick");

    return (0);
}
