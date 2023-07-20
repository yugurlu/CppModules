
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
        unsigned int len;
        T *elements;
    public:
        Array()
        {
            this->len = 0;
            this->elements = new T[this->n];
        }
        ~Array()
        {
            delete this->elements;
        }
        Array(unsigned int len)
        {
            this->len = len;
            this->elements = new T[this->len];
        }
        Array(const Array &copy)
        {
            this->len = copy.len;
            this->elements = new T[copy.len];
            for (unsigned int i = 0; i < copy.len; i++)
                this->elements[i] = copy.elements[i];
        }
        Array   &operator = (const Array &copy)
        {
            this->len = copy.len;
            this->elements = new T[copy.len];
            for (int i = 0; i < copy.len; i++)
                this->elements[i] = copy.elements[i];
            return *this;
        }
        T &operator[](unsigned  int index)
        {
            if(index >= this->len)
                throw std::out_of_range("Index out of range");
            else
                return this->elements[index];
        }
};

#endif