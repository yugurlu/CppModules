
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

using std::endl
using std::cout
using std::string

class   Animal
{
    protected:
        string  type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &copy);
        Animal  &operator = (const Animal &copy);
        virtual void    makeSound(void);
        string  getType(void);
};

#endif
