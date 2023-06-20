
#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

using std::cout;
using std::endl;
using std::string;


class Weapon
{
    private:
        string type;
    public:
        Weapon(string);
        void setType(string);
        const string& getType(void);
};

#endif
