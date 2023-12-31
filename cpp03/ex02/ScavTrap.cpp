
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->name = "undefined";
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    cout << "ScavTrap default constructor called" << endl;
}

ScavTrap::~ScavTrap(void)
{
    cout << "ScavTrap destructor called" << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
    this->name = name;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    cout << "ScavTrap constructor called" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void ScavTrap::attack(const string &target)
{
    if (this->hitPoint > 0 && this->energyPoint > 0)
    {
        cout << "ScavTrap " << this->name << " attacks " << target << ", causing ";
        cout << this->attackDamage << " point of damage!" << endl;
    }
    else
        cout << "ScavTrap " << this->name << " no hitPoint or energyPoint!" << endl;
}

void ScavTrap::guardGate(void)
{
    cout << "ScavTrap is now in Gate keeper mode" << endl;
}