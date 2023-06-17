
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;


class Zombie
{
    private:
        string Name;
    public:
        Zombie(string);
        ~Zombie();
        void setName(string);
        void announce(void);
};

void randomChump(string name);
Zombie* newZombie(string name);

#endif