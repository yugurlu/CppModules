
#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> *v = new std::vector<int>();

        v->push_back(2);
        v->push_back(3);
        v->push_back(4);
        v->push_back(5);
        v->push_back(6);

        cout << *::easyfind(v, 4) << endl;
        delete v;
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
}