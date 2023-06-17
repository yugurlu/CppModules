

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

using std::string;

class HumanB
{
    private:
        Weapon weapon;
        string name;
    public:
        HumanB(string);
        void setWeapon(Weapon weapon);
        void attack(void);
};

#endif