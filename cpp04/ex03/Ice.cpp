
#include "Ice.hpp"

Ice::Ice()
{
    cout << "Ice materia created" << endl;
    this->type = "ice";
}

Ice::~Ice()
{
    cout << "Ice materia destroyed" << endl;
}

Ice::Ice(const Ice &copy)
{
    *this = copy;
}

Ice    &Ice::operator = (const Ice &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

AMateria    *Ice::clone(void) const
{
    return new Ice();
}

void    Ice::use(ICharacter& target)
{
    cout << "* shoots an ice bolt at " << target.getName() <<  " *" << endl;
}