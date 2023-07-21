
#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

typedef struct s_Data
{
    string login;
    string password;
}               Data;

class   Serialize
{
    public:
        Serialize();
        ~Serialize();
        Serialize(const Serialize &);
        Serialize   &operator = (const Serialize &);

        uintptr_t   serialize(Data *ptr);
        Data    *deserailze(uintptr_t raw);
};

#endif