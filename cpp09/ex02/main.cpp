#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    std::vector<unsigned int> vectorNumbers;
    std::deque<unsigned int> dequeNumbers;

    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
        {
            if (std::atoi(av[i]) < 0)
            {
                cout << "Error" << endl;
                exit(0);
            }
        }
        Pmergeb m;
        m.start(vectorNumbers, dequeNumbers, av + 1);
    }
}
