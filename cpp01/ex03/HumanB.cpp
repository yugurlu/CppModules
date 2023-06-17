
#include "HumanB.hpp"

HumanB::HumanB(string name)
{
    this->name = name;
}

void HumanB::attack(void)
{
    cout << this->name << " attacks with their " << this->weapon.getType() << endl;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}