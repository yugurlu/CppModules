
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

using std::endl
using std::cout
using std::string

class WrongAnimal
{
    protected:
	    string type;
    public:
	    WrongAnimal();
	    virtual ~WrongAnimal();
	    WrongAnimal(WrongAnimal &);
	    WrongAnimal &operator = (const WrongAnimal &r);

	    virtual void    makeSound(void);
        void    getType(void);
};

#endif