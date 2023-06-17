
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

using std::string;

class HumanA
{
    private:
        Weapon weapon;
        string name;
    public:
        HumanA(string, Weapon);
        void attack(void);
};

#endif