
#ifndef SCLALARCONVERTER_HPP
#define SCLALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::string;


class    ScalarConverter
{
    private:
        string type;
        string value;
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(string);
        ScalarConverter(const ScalarConverter &);
        ScalarConverter &operator = (const ScalarConverter &);
        
        void convert(void);
        void chooseType(void);

        void printChar(void);
        void printInt(void);
        void printFloat(void);
        void printDouble(void);
};

#endif