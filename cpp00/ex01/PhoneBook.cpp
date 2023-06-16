
#include "PhoneBook.hpp"
#include "Contact.hpp"

using std::cin;
using std::cout;
using std::endl;

int PhoneBook::getTotalContacts(void){
    return (this->totalContacts);
}

void PhoneBook::setTotalContacts(void){
    this->totalContacts++;    
}

void PhoneBook::getContact(int index){
    cout << "Name: " << this->contacts[index].getName() << endl;
    cout << "Surname: " << this->contacts[index].getSurname() << endl;
    cout << "Nickname: " << this->contacts[index].getNickname() << endl;
    cout << "Phone Number: " << this->contacts[index].getPhoneNumber() << endl;
    cout << "Darkest Secret: " << this->contacts[index].getSecret() << endl;
}

void PhoneBook::addContact(void){
    string value;
    cout << "Name: ";
    cin >> value;
    this->contacts[getTotalContacts() % 8].setName(value);
    cout << "Surname: ";
    cin >> value;
    this->contacts[getTotalContacts() % 8].setSurname(value);
    cout << "Nickname: ";
    cin >> value;
    this->contacts[getTotalContacts() % 8].setNickname(value);
    cout << "Phone Number: ";
    cin >> value;
    this->contacts[getTotalContacts() % 8].setPhoneNumber(value);
    cout << "Darkest Secret: ";
    cin >> value;
    this->contacts[getTotalContacts() % 8].setSecret(value);
    setTotalContacts();
}

