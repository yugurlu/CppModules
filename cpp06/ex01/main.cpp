
#include "Serialize.hpp"

int main()
{
    Data data;
    Serialize serialize;

    data.login = "yusuf";
    data.password = "12345";

    uintptr_t raw = serialize.serialize(&data);
    cout << "uintptr_r format -> " << raw << endl;
    
    Data *reverse = serialize.deserailze(raw);
    cout << reverse->login << endl;
    cout << reverse->password << endl;
}