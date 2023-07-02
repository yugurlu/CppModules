
#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class   Cat : public AAnimal
{
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &);
        Cat  &operator = (const Cat &);

        void    makeSound(void) const;
};

#endif