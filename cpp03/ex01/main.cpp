
#include "ScavTrap.hpp"

int main()
{
    ScavTrap test("test");

    test.attack("enemy");
    test.takeDamage(30);
    test.guardGate();
}