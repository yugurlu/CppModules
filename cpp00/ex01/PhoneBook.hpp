
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::getline;

class PhoneBook
{
    private:
        Contact contacts[8];
        int totalContacts;
    public:
        PhoneBook();
        ~PhoneBook();
        int getTotalContacts(void);
        void setTotalContacts(void);
        void addContact(void);
        void getContact(int);
        void search(void);
};

#endif
