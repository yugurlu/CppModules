
#include <string.h>
#include <iostream>

int main(int ac, char **av)
{
    int i = 0;
    if (ac > 1)
    {
        while (av[++i])
        {
            int j = 0;
            while (av[i][j])
                std::cout << (char)toupper(av[i][j++]);
            std::cout << " ";
        }
    }
    else std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}