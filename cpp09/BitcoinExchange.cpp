
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(string inputFileName): inputFileName(inputFileName) {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void    BitcoinExchange::readFileAndExchange(void)
{
    string inputFileLine;
    std::ifstream inputFile(this->inputFileName);
    std::getline(inputFile, inputFileLine);

    // DATE CONTROL
    if (inputFileLine.length())
    {
        while (std::getline(inputFile, inputFileLine))
        {
            
        }
        
    }
}