
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;

int main(int ac, char **av)
{
    int i = 0;
    if (ac > 1)
    {
        while (av[++i])
        {
            int j = 0;
            while (av[i][j])
                cout << (char)toupper(av[i][j++]);
            cout << " ";
        }
    }
    else cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    cout << endl;
}