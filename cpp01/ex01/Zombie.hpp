
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
        Zombie();
        ~Zombie();
        Zombie(string);
        void setName(string);
        void announce(void);
};

Zombie* zombieHorde(int N, string name);

#endif