
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    cout << "Default constructor called" << endl;
}

ClapTrap::~ClapTrap(void)
{
    cout << "Destructor called" << endl;
}

ClapTrap::ClapTrap(string name)
{
    this->name = name;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    this->name = copy.name;
    this->hitPoint = copy.hitPoint;
    this->energyPoint = copy.energyPoint;
    this->attackDamage = copy.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    this->name = copy.name;
    this->hitPoint = copy.hitPoint;
    this->energyPoint = copy.energyPoint;
    this->attackDamage = copy.attackDamage;
    return *this;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoint > 0 && this->energyPoint > 0)
    {
        this->hitPoint -= amount;
        cout << "ClapTrap " << this->name << " " << amount << " takes damage and ";
        cout << this->hitPoint << " hit points remaining!" << endl;

    }
    else
        cout << "ClapTrap " << this->name << " no hitPoint or energyPoint!" << endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoint > 0 && this->energyPoint > 0)
    {
        this->hitPoint += amount;
        this->energyPoint -= 1;
        cout << "ClapTrap " << this->name << " repaired " << amount << " hitPoint itself!" << endl;
    }
    else
        cout << "ClapTrap " << this->name << " no hitPoint or energyPoint!" << endl;
}

void    ClapTrap::attack(const string &target)
{
    if (this->hitPoint > 0 && this->energyPoint > 0)
    {
        this->energyPoint -= 1;
        cout << "ClapTrap " << this->name << " attacks " << target << ", causing ";
        cout << this->attackDamage << " point of damage!" << endl;
    }
    else
        cout << "ClapTrap " << this->name << " no hitPoint or energyPoint!" << endl;
}