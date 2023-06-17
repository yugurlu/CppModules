
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

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
