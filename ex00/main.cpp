#include "Zombie.hpp"

int main()
{
    Zombie* zombie = newZombie("HeapZombie");
    zombie->announce();

    randomChump("StackZombie");

    delete zombie;
    return 0;
}