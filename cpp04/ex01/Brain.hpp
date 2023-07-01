
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class   Brain
{
    private:
        string *ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &);
        Brain   &operator = (const Brain &);
};

#endif