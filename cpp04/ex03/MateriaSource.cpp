
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->metaria[i] = NULL;
    
}

MateriaSource::~MateriaSource(){}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    *this = copy;
}

MateriaSource   &MateriaSource::operator = (const MateriaSource &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void    MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->metaria[i] == NULL)
        {
            this->metaria[i] = materia->clone();
            cout << materia->getType() << " materia learned" << endl;
            break;
        }
    }
}

AMateria    *MateriaSource::createMateria(string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->metaria[i] != NULL && this->metaria[i]->getType() == type)
        {
            cout << type << " materia created" << endl;
            return this->metaria[i]->clone(); 
        }
    }
    return 0;
}