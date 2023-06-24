
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        string name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(string);
        DiamondTrap(const DiamondTrap &);
        DiamondTrap &operator = (const DiamondTrap &);

        void    whoAmI(void);
        void    attack(const string &target);
};

#endif