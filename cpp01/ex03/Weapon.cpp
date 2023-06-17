
#include "Weapon.hpp"


Weapon::Weapon(void){}

Weapon::Weapon(string type)
{
    this->type = type;
}

const string& Weapon::getType(void)
{
    return Weapon::type;
}

void setType(string type)
{
    this->type = type;
}
