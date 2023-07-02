
#include "Cure.hpp"

Cure::Cure()
{
    cout << "Cure materia created" << endl;
    this->type = "cure";
}

Cure::~Cure()
{
    cout << "Cure materia destroyed" << endl;
}

Cure::Cure(const Cure &copy)
{
    *this = copy;
}

Cure    &Cure::operator = (const Cure &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

AMateria    *Cure::clone(void) const
{
    return new Cure();
}

void    Cure::use(ICharacter& target)
{
    cout << "* heals " << target.getName() << "'s wounds *" << endl;
}