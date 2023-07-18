
#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ScalarConverter test(av[1]);
        test.convert();
    }
    else
        cout << "wrong arguments entry!" << endl;
}