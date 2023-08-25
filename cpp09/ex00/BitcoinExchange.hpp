
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <string.h>
#include <map>

using std::cout;
using std::endl;
using std::string;

class   BitcoinExchange
{
    private:
        const string inputFileName;
        std::map<string, float> database;
    public:
        BitcoinExchange(string);
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &);
        BitcoinExchange &operator = (const BitcoinExchange &);

        void    getDatabase(void);
        void    readInputAndExchange(void);
        void    searchInDatabaseAndPrint(string, string);
};


#endif