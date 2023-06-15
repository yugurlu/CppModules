#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"


class PhoneBook
{
    private:    
        Contact contacts[8];
        int totalContacts;
    public:
        PhoneBook(){
            this->totalContacts = 0;
        };
        int getTotalContacts(void);
        void setTotalContacts(void);
        void addContact(void);
        void getContact(int);
};

#endif
