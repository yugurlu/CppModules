
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(string);
        FragTrap(const FragTrap &);
        FragTrap &operator = (const FragTrap &);

        void highFivesGuys(void);
};

#endif