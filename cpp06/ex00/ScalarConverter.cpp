
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

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	if (this != &copy)
    {
		this->type = copy.type;
		this->value = copy.value;
    }
	return (*this);
}

void    ScalarConverter::chooseType(void)
{
    if (this->value == "nan")
        this->type = "nan";
	else if (std::all_of(this->value.begin(), this->value.end(), ::isalpha))
    {
        if (this->value.length() == 1)
            this->type = "char";
        else
            this->type = "string";
    }
    else if (std::all_of(this->value.begin(), this->value.end(), ::isdigit))
        this->type = "int";
    else if (this->value[this->value.length() - 1] == 'f')
    {
        std::istringstream iss(this->value);
        float num;
        iss >> std::noskipws >> num;
        if (iss.eof() && iss.fail())
            this->type = "float";
        else
            this->type = "undefined";
    }
    else
    {
        std::istringstream iss(this->value);
        double num;
        iss >> std::noskipws >> num;
        if (iss.eof() && !iss.fail())
            this->type = "double";
        else
            this->type = "undefined";
    }
}

void    ScalarConverter::printChar(void)
{
    cout << "char: ";
    if (this->type == "char")
        cout << '\'' << this->value << '\'' << endl;
    else if (this->type == "int")
    {
        if ((0 <= atoi(this->value.c_str()) && atoi(this->value.c_str()) <= 31) || atoi(this->value.c_str()) > 127)
            cout << "Non displayable" << endl;
        else
            cout << '\'' << (char)atoi(this->value.c_str()) << '\'' << endl;
    }
    else if (this->type == "float" || this->type == "double")
    {
        if ((0 <= static_cast<int>(std::stof(this->value)) && static_cast<int>(std::stof(this->value)) <= 31) || static_cast<int>(std::stof(this->value)) > 127)
            cout << "Non displayable" << endl;
        else
            cout << '\'' << static_cast<char>(static_cast<int>(std::stof(this->value))) << '\'' << endl; 
    }
    else
        cout << "impossible" << endl;
}

void    ScalarConverter::printInt(void)
{
    cout << "int: ";
    if (this->type == "char")
        cout << (int)this->value[0] << endl;
    else if (this->type == "int")
        cout << this->value << endl;
    else if (this->type == "float" || this->type == "double")
        cout << static_cast<int>(std::stof(this->value)) << endl;
    else
        cout << "impossible" << endl;
}

void    ScalarConverter::printFloat(void)
{
    cout << "float: ";
    if (this->type == "char")
        cout << (int)this->value[0] << ".0f" << endl;
    else if (this->type == "int")
        cout << this->value + ".0f" << endl;
    else if (this->type == "float")
        cout << this->value << endl;
    else if (this->type == "double")
        cout << this->value + "f" << endl;
    else
        cout << "nanf" << endl;
}

void    ScalarConverter::printDouble(void)
{
    cout << "double: ";
    if (this->type == "char")
        cout << (int)this->value[0] << ".0" << endl;
    else if (this->type == "int")
        cout << this->value + ".0" << endl;
    else if (this->type == "float")
        cout << this->value.substr(0, this->value.find('f')) << endl;
    else if (this->type == "double")
        cout << this->value << endl;
    else
        cout << "nan" << endl;
}

void    ScalarConverter::convert(void)
{
    this->chooseType();
    this->printChar();
    this->printInt();
    this->printFloat();
    this->printDouble();
}
