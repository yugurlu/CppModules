
#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        RPN a(av[1]);
        if (a.control())
            a.readRPN();
    }
    else
        cout << "Wrong argument" << endl;
}