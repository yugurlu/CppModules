
#include "Serialize.hpp"

int main()
{
    Data data;
    Serialize serialize;

    data.name = "yusuf";
    data.login = "yugurlu";

    uintptr_t raw = serialize.serialize(&data);
    cout << "uintptr_r format -> " << raw << endl;
    
    Data *reverse = serialize.deserailze(raw);
    cout << reverse->name << endl;
    cout << reverse->login << endl;


}