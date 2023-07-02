
#include "AMateria.hpp"


AMateria::AMateria(){}

AMateria::~AMateria(){}

AMateria::AMateria(const string &type)
{
    this->type = type;
}

AMateria    &AMateria::operator = (const AMateria &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

const string &AMateria::getType(void) const
{
    return this->type;
}

void    AMateria::use(ICharacter& target)
{
    cout << "Metarial used on " << target.getName() << endl;
}
