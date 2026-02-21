#include "Zombie.hpp"

int main()
{
    Zombie* horde = zombieHorde(5, "Andrei");

    for (int i = 0; i < 5; i++)
        horde[i].announce(i + 1);

    delete[] horde;
    return 0;
}