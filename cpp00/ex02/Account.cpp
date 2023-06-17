
#include "Account.hpp"
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;

int Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
} 

int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}

Account::Account(int initial_deposit)
{
    this->_displayTimestamp();
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = this->_nbAccounts;
    cout << "index:" << this->_accountIndex << ";";    
    this->_amount = initial_deposit;
    cout << "amount:" << this->_amount << ";created" << endl;
    this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
}

Account::~Account(void)
{
    this->_displayTimestamp();
    cout << "index:" << this->_accountIndex << ";";
    cout << "amount:" << this->_amount << ";";
    cout << "closed" << endl;
}

void Account::displayStatus(void) const
{
    this->_displayTimestamp();
    cout << "index:" << this->_accountIndex << ";";
    cout << "amount:" <<  this->_amount << ";" ;
    cout << "deposits:" << this->_nbDeposits << ";";
    cout << "withdrawals:" << this->_nbWithdrawals << endl;
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    cout << "accounts:" << Account::_nbAccounts << ";";
    cout << "total:" << Account::_totalAmount << ";";
    cout << "deposits:" << Account::_totalNbDeposits << ";";
    cout << "withdrawals:" << Account::_totalNbWithdrawals << endl;
}

void Account::makeDeposit(int deposit)
{
    this->_displayTimestamp();
    cout << "index:" << this->_accountIndex << ";";
    cout << "p_amount:" << this->_amount << ";";
    cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    this->_nbDeposits++;
    this->_totalNbDeposits++;
    this->_totalAmount += deposit;
    cout << "amount:" << this->_amount << ";";
    cout << "nb_deposits:" << this->_nbDeposits << endl;
}

bool Account::makeWithdrawal(int whitdrawal)
{
    this->_displayTimestamp();
    cout << "index:" << this->_accountIndex << ";";
    cout << "p_amount:" << this->_amount << ";";
    if (this->_amount < whitdrawal)
    {
        cout << "withdrawal:refused" << endl;
        return (false);
    }
    else
    {
        this->_amount -= whitdrawal;
        this->_totalAmount -= whitdrawal;
        this->_nbWithdrawals++;
        this->_totalNbWithdrawals++;
        cout << "withdrawal:" << whitdrawal << ";";
        cout << "amount:" << this->_amount << ";";
        cout << "nb_withdrawals:" << this->_nbWithdrawals << endl;
        return (true);
    }
}

void Account::_displayTimestamp(void)
{
    time_t now = time(0);
    tm *time = localtime(&now);
    cout << "[" << time->tm_year + 1900;
    cout << time->tm_mon + 1;
    cout << time->tm_mday << "_";
    cout << time->tm_hour + 5;
    cout << time->tm_min + 30;
    cout << time->tm_sec << "] ";
}
