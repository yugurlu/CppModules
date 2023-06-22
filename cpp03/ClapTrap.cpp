
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    cout << "Default constructor called" << endl;
}

ClapTrap::ClapTrap(string name)
{
    this->name = name;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
    cout << "Destructor called" << endl;
}