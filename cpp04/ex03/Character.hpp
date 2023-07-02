
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class   Character : public ICharacter
{
    private:
        string name;
        AMateria *materia[4];
    public:
        Character();
        ~Character();
        Character(const string name);
        Character(const Character &);
        Character   &operator = (const Character &);

        string const & getName() const;
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter& target);

};

#endif