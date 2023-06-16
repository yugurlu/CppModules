
#include "PhoneBook.hpp"
#include "Contact.hpp"


int Contact::getIndex(void)
{
    return (this->index);
}

string Contact::getName(void)
{
    return (this->name);
}

string Contact::getSurname(void)
{
    return (this->surName);
}

string Contact::getNickname(void)
{
    return (this->nickName);
}

string Contact::getPhoneNumber(void)
{
    return (this->phoneNumber);
}

string Contact::getSecret(void)
{
    return (this->darkestSecret);
}

void Contact::setIndex(int index)
{
    this->index = index;
}

void Contact::setName(string name)
{
    this->name = name;
}

void Contact::setSurname(string surName)
{
    this->surName = surName;
}

void Contact::setNickname(string nickName)
{
    this->nickName = nickName;
}

void Contact::setPhoneNumber(string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setSecret(string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}