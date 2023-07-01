
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::endl;
using std::cout;
using std::string;

class   Animal
{
    protected:
        string  type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &);
        Animal  &operator = (const Animal &);

        virtual void    makeSound(void) const;
        string  getType(void) const;
};

#endif
