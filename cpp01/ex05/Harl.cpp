
#include "Harl.hpp"

void Harl::debug(void)
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
			"pickle-specialketchup burger. I really do!" << endl;
}

void Harl::info(void)
{
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough " 
            "bacon in my burger! If you did, I wouldn’t be asking for more!"  << endl;
}

void Harl::warning(void)
{
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
			"years whereas you started working here since last month." << endl;
}

void Harl::error(void)
{
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level)
{
    int i = 0;
    string commandList[] = {"debug", "info", "warning", "error"};
    void (Harl::*funcArray[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    while (i < 5 &&  commandList[i].compare(level)) i++;
    if (i < 4 || commandList[0] == level)
        (this->*funcArray[i])();
}