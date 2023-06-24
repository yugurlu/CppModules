
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(string);
        ScavTrap(const ScavTrap &);
        ScavTrap &operator = (const ScavTrap &);

        void attack(const string& target);
        void guardGate(void);
};


#endif