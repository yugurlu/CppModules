
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

void    BitcoinExchange::getDatabase(void)
{
    string databaseFileLine;
    std::ifstream databaseFile("data.csv");
    
    std::getline(databaseFile, databaseFileLine);

    std::map<string, double> dataMap;

    while (std::getline(databaseFile, databaseFileLine))
    {
        float value = std::stof(databaseFileLine.substr(11));
        this->database.insert(std::make_pair(databaseFileLine.substr(0, 10), value));
    }
    databaseFile.close();  
}

void    BitcoinExchange::readInputAndExchange(void)
{
    string line;
    std::ifstream inputFile(this->inputFileName);

    if (inputFile.fail())
    {
        inputFile.close();
        return throw string("Error: could not open file.");
    }

    std::getline(inputFile, line);
    while (std::getline(inputFile, line))
    {
        float value;
        int year, month, day;
        try
        {
            if (line.length() >= 14)
            {
                year = std::stoi(line.substr(0,4));
                month = std::stoi(line.substr(5, 2));
                day = std::stoi(line.substr(8, 2));
                value = std::stof(line.substr(13));
            }
            else
                return throw string("Error: bad input => " + line.substr(0,10));
            if (year < 0 || month > 12 || month < 0 || day > 30 || day < 0)
                return throw string("Error: bad input => " + line.substr(0,10));
            if (value < 0)
                return throw string("Error: not a positive number.");
            if (value == INT_MAX)
                return throw string("Error: too large a number.");

            this->searchInDatabaseAndPrint(line.substr(0,10), line.substr(13));
        }
        catch (string &e)
        {
            cout << e << endl;
        }
    }
    inputFile.close();
}

void    BitcoinExchange::searchInDatabaseAndPrint(string year, string value)
{
    bool flag;
    std::map<string, float>::iterator it = this->database.begin();

    while (it != this->database.end())
    {
        if (it->first == year)
        {
            cout << year << " => " << value << " = " << (it->second * std::stof(value)) << endl;
            flag = false;
            break;
        }
        it++;
        if (it == this->database.end())
            flag = true; 
    }
    if (flag)
    {
        it = this->database.lower_bound(year);
        cout << year << " => " << value << " = " << (it->second * std::stof(value)) << endl;
    }
}
