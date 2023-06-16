

#include "Contact.hpp"
#include "PhoneBook.hpp"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    string command;
    PhoneBook phoneBook;
    while (true)
    {
        cout << "Please enter a command: ";
        cin >> command;
        if(!command.compare("ADD"))
            phoneBook.addContact();
        else if(!command.compare("SEARCH"))
            phoneBook.search();
        else if(!command.compare("EXIT"))
            return (1);
        else
            cout << "Command not found! Please try again" << endl;
    }
}