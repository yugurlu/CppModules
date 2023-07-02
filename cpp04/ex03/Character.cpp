
#include "Character.hpp"

Character::Character()
{
    cout << "Character created!" << endl;
}

Character::~Character()
{
    cout << "Character destroyed!" <<  endl;
}

Character::Character(const string name)
{
    this->name = name;
}

Character::Character(const Character &copy)
{
    *this = copy;
}

Character   &Character::operator = (const Character &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

const string    &Character::getName(void) const
{
    return this->name;
}

void    Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] == NULL)
        {
            this->materia[i] = m;
            cout << this->name << "'s " << m->getType() << " materia equipped" << endl;
            break;
        }
    }
}

void    Character::unequip(int idx)
{
    if (0 <= idx && idx < 4 && this->materia[idx] != NULL)
    {
        this->materia[idx] = NULL;
        cout << this->name << "'s " << this->materia[idx]->getType() << " materia unequiped" << endl;
    }
}

void    Character::use(int idx, ICharacter& target)
{
    if (this->materia[idx] != NULL)
        this->materia[idx]->use(target);
}