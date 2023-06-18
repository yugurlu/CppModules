#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>

using std::string;

class Contact
{
    private:
        string name;
        string surName;
        string nickName;
        string phoneNumber;
        string darkestSecret;
    public:
        string getName(void);
        string getSurname(void);
        string getNickname(void);
        string getPhoneNumber(void);
        string getSecret(void);
        void setName(string name);
        void setSurname(string surName);
        void setNickname(string nickName);
        void setPhoneNumber(string phoneNumber);
        void setSecret(string darkestSecret);
};

#endif
