
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <class T>
class   Array
{
    private:
        unsigned int n;
        T *elements;
    public:
        Array()
        {
            this->n = 0;
            cout << this->n << endl;
            this->elements = new T[this->n];
        }
        ~Array()
        {
            delete this->elements;
        }
        Array(unsigned int n)
        {
            this->n = n;
            this->elements = new T[this->n];
        }
        Array(const Array &copy)
        {
            this->n = copy.n;
            this->elements = new T[copy.n];
            for (unsigned int i = 0; i < copy.n; i++)
                this->elements[i] = copy.elements[i];
        }
        Array   &operator = (const Array &copy)
        {
            this->n = copy.n;
            this->elements = new T[copy.n];
            for (int i = 0; i < copy.n; i++)
                this->elements[i] = copy.elements[i];
            return *this;
        }
        T &operator[](unsigned  int index)
        {
            if(index >= this->n)
                throw std::out_of_range("Index out of range");
            else
                return this->elements[index];
        }
};

#endif