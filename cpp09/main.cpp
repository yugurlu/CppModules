
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac > 1)
    {
        BitcoinExchange test(av[1]);
        test.readFileAndExchange();
    }
    else
        cout << "Error: could not open file." << endl;
}