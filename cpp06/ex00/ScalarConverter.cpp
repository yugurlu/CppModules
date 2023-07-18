
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

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
		*this = copy;
	return (*this);
}

void    ScalarConverter::chooseType(void)
{
	if (std::all_of(this->value.begin(), this->value.end(), ::isalpha)) //CHAR
    {
        if (this->value.length() == 1)
        {
            this->type = "char";
            cout << "girilen value char" << endl;
        }
        else
        {
            this->type = "string";
            cout << "girilen value string" << endl;
        }
    }
    else if (std::all_of(this->value.begin(), this->value.end(), ::isdigit)) //INT
    {
        this->type = "int";
        cout << "girilen value int" << endl;
    }
    else if (this->value[this->value.length() - 1] == 'f')
    {
        std::istringstream iss(this->value);
        float num;
        iss >> std::noskipws >> num;
        if (iss.eof() && iss.fail())
        {
            this->type = "float";
            cout << "girilen value float" << endl;
        }
        else
        {
            this->type = "undefined";
            cout << "girilen value tanımsız" << endl;
        }
    }
    else
    {
        std::istringstream iss(this->value);
        double num;
        iss >> std::noskipws >> num;
        if (iss.eof() && !iss.fail())
        {
            this->type = "double";
            cout << "girilen value double" << endl;
        }
        else
        {
            this->type = "undefined";
            cout << "girilen value tanımsız2" << endl;
        }
    }
}

void    ScalarConverter::printChar(void)
{
    cout << "char: ";
    if (this->type == "char")
        cout << this->value;
    else if (this->type == "int")
    {
        if ((0 <= atoi(this->value.c_str()) && atoi(this->value.c_str()) <= 31) || atoi(this->value.c_str()) > 127)
            cout << "Non displayable" << endl;
        else
            cout << (char)atoi(this->value.c_str()) << endl;
    }
    else if (this->type == "float" || this->type == "double")
    {
        if ((0 <= static_cast<int>(std::stof(this->value)) && static_cast<int>(std::stof(this->value)) <= 31) || static_cast<int>(std::stof(this->value)) > 127)
            cout << "Non displayable" << endl;
        else
            cout << static_cast<char>(static_cast<int>(std::stof(this->value)));
    }
}

void    ScalarConverter::printInt(void)
{
    
}

void    ScalarConverter::convert(void)
{
    this->chooseType();
    this->printChar();
    this->printInt();
    // this->printFloat();
    // this->printDouble();
	//1- first choice type
	//2- and stages -> print char/int/float/double (if cond)
	//3- thats it!
}
