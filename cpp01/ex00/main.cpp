
#include "Zombie.hpp"

int main()
{
    Zombie *zombie1 = newZombie("zombie1");
    randomChump("zombie2");
    delete zombie1;
}