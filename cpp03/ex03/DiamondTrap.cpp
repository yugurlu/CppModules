
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
    this->name = "undefined";
    this->ClapTrap::name = "undefined_clap_name";
    this->hitPoint = this->FragTrap::hitPoint;
    this->energyPoint = this->ScavTrap::energyPoint;
    this->attackDamage = this->FragTrap::attackDamage;
    cout << "DiamondTrap default constructor called" << endl;
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "DiamondTrap destructor called" << endl;
}

DiamondTrap::DiamondTrap(string name) : ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
    this->name = name;
    this->hitPoint = this->FragTrap::hitPoint;
    this->energyPoint = this->ScavTrap::energyPoint;
    this->attackDamage = this->FragTrap::attackDamage;
    cout << "DiamondTrap constructor called" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    *this = copy;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void    DiamondTrap::attack(const string &target)
{
    this->ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    cout << "Hi my DiamondTrap name is " << this->name << ", ClapTrap name is " << this->ClapTrap::name << endl;
}




