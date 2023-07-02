
#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

using std::endl;
using std::cout;
using std::string;

class   AAnimal
{
    protected:
        string  type;
    public:
        AAnimal();
        virtual ~AAnimal();
        AAnimal(const AAnimal &);
        AAnimal  &operator = (const AAnimal &);

        virtual void    makeSound(void) const = 0;
        string  getType(void) const;
};

#endif
