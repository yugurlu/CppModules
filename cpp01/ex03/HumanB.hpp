

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

using std::string;

class HumanB
{
    private:
        string name;
        Weapon *weapon;
    public:
        HumanB(string);
        void setWeapon(Weapon &);
        void attack(void);
};

#endif