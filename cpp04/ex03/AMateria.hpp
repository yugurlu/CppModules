
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

class   AMateria
{
    protected:
        string type;
    public:
        AMateria();
        ~AMateria();
        AMateria(const string &);
        AMateria    &operator = (const AMateria &);

        string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif