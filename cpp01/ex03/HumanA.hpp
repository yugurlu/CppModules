
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

using std::string;

class HumanA
{
    private:
        string name;
        Weapon *weapon;
    public:
        HumanA(string, Weapon &);
        void attack(void);
};

#endif