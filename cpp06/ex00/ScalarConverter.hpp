
#ifndef SCLALARCONVERTER_HPP
#define SCLALARCONVERTER_HPP

#include <iostream>
#include <sstream>

using std::cout;
using std::endl;
using std::string;


class    ScalarConverter
{
    private:
        string value;
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(string);
        ScalarConverter(const ScalarConverter &);
        ScalarConverter &operator = (const ScalarConverter &);
        
        void convert(void);
};

#endif