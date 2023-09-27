#ifndef PMERGEB_HPP
#define PMERGEB_HPP

#include <deque>
#include <vector>
#include <ctime>
#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::string;

class   Pmergeb
{
    public:
        Pmergeb();
        ~Pmergeb();
        Pmergeb(const Pmergeb &);
        Pmergeb &operator = (const Pmergeb &);

        void start(std::vector<unsigned int> &, std::deque<unsigned int> &, char **av);

        template <typename C>
        void    fillContainer(C &, char **);
        template <typename C>
        void    sort(C &, unsigned int);
        template <typename C>
        void    insertionSort(C &, int, int);
};

bool    any_character(char *arr);

#endif