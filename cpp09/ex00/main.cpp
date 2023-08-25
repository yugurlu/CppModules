
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac > 1)
    {
        try
        {
            BitcoinExchange test(av[1]);
            test.getDatabase();
            test.readInputAndExchange();
        }
        catch (string& e)
        {
            std::cerr << e << endl;
        }
    }
    else
        cout << "Error: could not open file." << endl;
}