
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::string;

class   BitcoinExchange
{
    private:
        const string inputFileName;
    public:
        BitcoinExchange(string);
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &);
        BitcoinExchange &operator = (const BitcoinExchange &);

        void    readFileAndExchange(void);
};


#endif