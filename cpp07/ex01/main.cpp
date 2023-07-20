
#include "iter.hpp"

void    func(int str)
{
    cout << str << endl;
}

int main()
{
    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    ::iter(arr, 3, func);
}