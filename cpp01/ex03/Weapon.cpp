
#include "Weapon.hpp"

Weapon::Weapon(string type)
{
    this->type = type;
}

const string& Weapon::getType(void)
{
    return Weapon::type;
}

void Weapon::setType(string type)
{
    this->type = type;
}
