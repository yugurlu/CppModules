
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
    private:
        string name;
        int hitPoint;
        int energyPoint;
        int attackDamage;
    public:
        ClapTrap();
        ClapTrap(string);
        ~ClapTrap();
        ClapTrap(const ClapTrap &);
        ClapTrap &operator = (const ClapTrap &);

        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void attack(const string& target);
};

#endif