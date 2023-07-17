
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(string value)
{
    this->value = value;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}

ScalarConverter &ScalarConverter::operator = (const ScalarConverter &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

void    ScalarConverter::convert(void)
{
    //1- first choice type
    //2- and stages -> print char/int/float/double (if cond)
    //3- thats it!
}
