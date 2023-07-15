
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
    //is float
    std::istringstream iss(this->value);
    float value;
    char remainingChar = 0;
    int flag = 0;

    if ((iss >> value && !(iss >> remainingChar)) || remainingChar == 'f')
    {
        flag = 1;
        cout << "float" << endl;
    }
    else
        cout << "not float" << endl;

    if (flag)
    {
        try
        {
            float value = std::stof(this->value);
            cout << value << endl;
        }
        catch (const std::invalid_argument&)
        {
            cout << "convert fail" << endl;
        }
    }
}