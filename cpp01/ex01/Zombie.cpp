
#include "Zombie.hpp"


Zombie::Zombie()
{
    cout << "Zombie created!" << endl;
}

Zombie::Zombie(string name)
{
    this->Name = name;
}

Zombie::~Zombie(void)
{
    cout << this->Name << " destroyed!" << endl;
}

void Zombie::setName(string name)
{
    this->Name = name;
}

void Zombie::announce(void)
{
    cout << this->Name << ": ";
    cout << "BraiiiiiiinnnzzzZ..." << endl;
}
