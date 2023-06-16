
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <math.h>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;

PhoneBook::PhoneBook(void)
{
    this->totalContacts = 0;
    cout << "<< Welcome to my PhoneBook! >>" << endl << "-> ADD" << endl << "-> SEARCH" << endl << "-> EXIT" << endl;
}

PhoneBook::~PhoneBook(void)
{
    cout << "byy" << endl;
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
    cout << "Name: ";
    cin >> value;
    this->contacts[this->totalContacts % 8].setName(value);
    cout << "Surname: ";
    cin >> value;
    this->contacts[this->totalContacts % 8].setSurname(value);
    cout << "Nickname: ";
    cin >> value;
    this->contacts[this->totalContacts % 8].setNickname(value);
    cout << "Phone Number: ";
    cin >> value;
    this->contacts[this->totalContacts % 8].setPhoneNumber(value);
    cout << "Darkest Secret: ";
    cin >> value;
    this->contacts[this->totalContacts % 8].setSecret(value);
    this->totalContacts++;
}

void PhoneBook::search(void)
{
    cout << endl << "     index|      name|    number|  nickname|";
    cout << endl << "--------------------------------------------" << endl;
    for (int i = 0; i < getTotalContacts(); i++)
    {
        cout << "         " << i << "|";
        for (int space = 0; space < (int)(10 - this->contacts[i].getName().length()); space++)
            cout << " ";
        if(this->contacts[i].getName().length() > 10)
            cout << this->contacts[i].getName().substr(0, 9) << ".|";
        else
            cout << this->contacts[i].getName() << "|";
        for (int space = 0; space < (int)(10 - this->contacts[i].getPhoneNumber().length()); space++)
            cout << " ";
        if(this->contacts[i].getPhoneNumber().length() > 10)
            cout << this->contacts[i].getPhoneNumber().substr(0, 9) << ".|";
        else
            cout << this->contacts[i].getPhoneNumber() << "|";
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
        cin >> index;

        if (index.length() > 1 || isdigit(index[0]))
        {
            cout << "Wrong index!" << endl;
        }
        else if (!(0 <= atoi(index.c_str()) && atoi(index.c_str()) < this->totalContacts))
            cout << "Wrong index!" << endl;
        else
        {
            this->getContact(atoi(index.c_str()));
            break;
        }
    }
}
