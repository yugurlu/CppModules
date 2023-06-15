#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>

using std::string;

class Contact
{
    private:
        int index;
        string name;
        string surName;
        string nickName;
        string phoneNumber;
        string darkestSecret;
    public:
        int getIndex(void);
        string getName(void);
        string getSurname(void);
        string getNickname(void);
        string getPhoneNumber(void);
        string getSecret(void);
        void setIndex(int index);
        void setName(string name);
        void setSurname(string surName);
        void setNickname(string nickName);
        void setPhoneNumber(string phoneNumber);
        void setSecret(string darkestSecret);
};

#endif
