
#include "Serialize.hpp"

Serialize::Serialize() {}

Serialize::~Serialize() {}

Serialize::Serialize(const Serialize &copy)
{
    *this = copy;
}

Serialize   &Serialize::operator = (const Serialize &copy)
{
    (void)copy;
    return *this;
}

uintptr_t   Serialize::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data    *Serialize::deserailze(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}