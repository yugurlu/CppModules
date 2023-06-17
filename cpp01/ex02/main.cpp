
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string *stringREF = stringPTR;

    cout << &str << endl;
    cout << &stringPTR << endl;
    cout << &stringREF << endl;

    cout << str << endl;
    cout << *stringPTR << endl;
    cout << *stringREF << endl;

}