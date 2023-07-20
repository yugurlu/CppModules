
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

using std::cout;
using std::end;
using std::string;

template <class T>

class   Array
{
    private:
        int len;
        T *elements;
    public:
        Array()
        {
            this->len = 0;
            this->elements = new T[this->n];
        }
        Array(unsigned int n)
        {
            this->len = n;
            this->elements = new T[n];
        }
        Array(const Array &copy)
        {
            this->elements = new T[copy.len];
            for (int i = 0; i < copy.len; i++)
                this->elements[i] = copy.elements[i];
        }
        Array   &operator = (const Array &copy)
        {
            this->elements = new T[copy.len];
            for (int i = 0; i < copy.len; i++)
                this->elements[i] = copy.elements[i];
            return *this;
        }
};

#endif