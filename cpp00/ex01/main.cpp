

#include "Contact.hpp"
#include "PhoneBook.hpp"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    //test
    PhoneBook phoneBook;
    phoneBook.addContact();
    cout << phoneBook.getTotalContacts() << endl;
    phoneBook.getContact(0);
}