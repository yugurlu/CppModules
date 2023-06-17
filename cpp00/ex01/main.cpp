

#include "Contact.hpp"
#include "PhoneBook.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
    string command;
    PhoneBook phoneBook;
    while (true)
    {
        cout << "Please enter a command: ";
        getline(cin, command);
        if(!command.compare("ADD") && !cin.eof())
            phoneBook.addContact();
        else if(!command.compare("SEARCH") && !cin.eof())
            phoneBook.search();
        else if(!command.compare("EXIT") && !cin.eof())
            return (1);
        else if (!cin.eof())
            cout << "\033[31m" << "Command not found! Please try again" << "\033[0m" << endl;
        if (cin.eof())
            break;
    }
}