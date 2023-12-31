
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    this->name = "undefined";
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    cout << "FragTrap default constructor called" << endl;
}

FragTrap::~FragTrap(void)
{
    cout << "FragTrap destructor called" << endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
    this->name = name;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    cout << "FragTrap constructor called" << endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    cout << "FragTrap wants to high five you!" << endl;
}