
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <math.h>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;
using std::getline;

PhoneBook::PhoneBook(void)
{
    this->totalContacts = 0;
    cout << "\033[35m" << "<< Welcome to my PhoneBook! >>" << "\033[0m" << endl;
    cout << "\033[36m" << "-> ADD" << endl << "-> SEARCH" << endl << "-> EXIT" << "\033[0m" << endl ;
}

PhoneBook::~PhoneBook(void)
{
    cout << "\033[32m" << "Byy (∩_∩)" << endl;
}

int PhoneBook::getTotalContacts(void)
{
    return (this->totalContacts);
}

void PhoneBook::setTotalContacts(void)
{
    this->totalContacts++;    
}

void PhoneBook::getContact(int index)
{
    cout << "Name: " << this->contacts[index].getName() << endl;
    cout << "Surname: " << this->contacts[index].getSurname() << endl;
    cout << "Nickname: " << this->contacts[index].getNickname() << endl;
    cout << "Phone Number: " << this->contacts[index].getPhoneNumber() << endl;
    cout << "Darkest Secret: " << this->contacts[index].getSecret() << endl;
}

void PhoneBook::addContact(void)
{
    string value;
    while(!value.length() && !cin.eof())
    {
        cout << "Name: ";
        getline(cin, value);
    }
    this->contacts[this->totalContacts % 8].setName(value);

    value.clear();
    while(!value.length() && !cin.eof())
    {
        cout << "Surname: ";
        getline(cin, value);
    }
    this->contacts[this->totalContacts % 8].setSurname(value);

    value.clear();
    while(!value.length() && !cin.eof())
    {
        cout << "Nickname: ";
        getline(cin, value);
    }
    this->contacts[this->totalContacts % 8].setNickname(value);

    value.clear();
    while(!value.length() && !cin.eof())
    {
        cout << "Phone Number: ";
        getline(cin, value);
    }
    this->contacts[this->totalContacts % 8].setPhoneNumber(value);

    value.clear();
    while(!value.length() && !cin.eof())
    {
        cout << "Darkest Secret: ";
        getline(cin, value);
    }
    this->contacts[this->totalContacts % 8].setSecret(value);
    this->totalContacts++;
}

void PhoneBook::search(void)
{
    cout << endl << "     index|      name|   surname|  nickname|";
    cout << endl << "--------------------------------------------" << endl;
    for (int i = 0; i < (getTotalContacts() > 8 ? 8 : getTotalContacts()); i++)
    {
        cout << "         " << i << "|";
        for (int space = 0; space < (int)(10 - this->contacts[i].getName().length()); space++)
            cout << " ";
        if(this->contacts[i].getName().length() > 10)
            cout << this->contacts[i].getName().substr(0, 9) << ".|";
        else
            cout << this->contacts[i].getName() << "|";

        for (int space = 0; space < (int)(10 - this->contacts[i].getSurname().length()); space++)
            cout << " ";
        if(this->contacts[i].getSurname().length() > 10)
            cout << this->contacts[i].getSurname().substr(0, 9) << ".|";
        else
            cout << this->contacts[i].getSurname() << "|";

        for (int space = 0; space < (int)(10 - this->contacts[i].getNickname().length()); space++)
            cout << " ";
        if(this->contacts[i].getNickname().length() > 10)
            cout << this->contacts[i].getNickname().substr(0, 9) << ".|" << endl;
        else
            cout << this->contacts[i].getNickname() << "|" << endl;
    }

    while (true)
    {
        string index;
        cout << "Please enter index:" << endl;
        getline(cin, index);
        if (index.length() > 1 || !isdigit(index[0]))
            cout << "Wrong index!" << endl;
        else if (!(0 <= atoi(index.c_str()) && atoi(index.c_str()) < this->totalContacts))
            cout << "Wrong index!" << endl;
        else
        {
            this->getContact(atoi(index.c_str()));
            break;
        }
    }
}
