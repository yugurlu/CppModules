
#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("test1");

    a.takeDamage(5);
    a.beRepaired(10);
    a.takeDamage(10);
    a.attack("enemy");
    a.takeDamage(10);
    a.attack("enemy");
}