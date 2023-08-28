#include "PmergeMe.hpp"

Pmergeb::Pmergeb() {}

Pmergeb::~Pmergeb() {}

Pmergeb::Pmergeb(const Pmergeb &copy)
{
    *this = copy;
}

Pmergeb &Pmergeb::operator = (const Pmergeb &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

template <typename C>
void    Pmergeb::fillContainer(C &container, char **av)
{
    for (int i = 0; av[i]; i++)
        container.push_back(std::atoi(av[i]));
}

template <typename C>
void    Pmergeb::insertionSort(C &container, int n, int len)
{
    for (int i = 1; i < n && i < len; i++)
    {
        int j = i - 1;
        unsigned int key = container[i];
        while (j >= 0 && container[j] > key)
        {
            container[j + 1] = container[j];
            j = j - 1;
        }
        container[j + 1] = key;
    }
}

template <typename C>
void    Pmergeb::sort(C &container, unsigned int limit)
{
    unsigned int address = 0;
    while (address < container.size())
    {
        typename C::iterator iteStart = container.begin() + address;
        insertionSort(iteStart, limit, container.size() - address);
        address += limit;
    }
    if (limit < container.size())
        this->sort(container, limit * 2);
}

void    Pmergeb::start(std::vector<unsigned int> &vector, std::deque<unsigned int> &deque, char **av)
{
    cout << "Before:  ";
    for (int i = 0; av[i]; i++)
        cout << av[i] << " ";
    cout << endl;

    //VECTOR
    clock_t timer = clock();
    this->fillContainer(vector, av);
    this->sort(vector, 10);
    timer = clock() - timer;
    
    cout << "After:  ";
    for (std::vector<unsigned int>::iterator ite = vector.begin(); ite != vector.end(); ite++)
        cout << *ite << " ";
    cout << endl <<"Time to process a range of " << vector.size() << " elements with std::vector" << " : " << (float)timer / CLOCKS_PER_SEC * 1000 << " us" << endl;

    //DEQUE
    timer = clock();
    this->fillContainer(deque, av);
    this->sort(deque, 10);
    timer = clock() - timer;

    cout << "Time to process a range of " << deque.size() << " elements with std::deque" << " : " << (float)timer / CLOCKS_PER_SEC * 1000 << " us" << endl;
}