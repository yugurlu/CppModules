
#include "RPN.hpp"

RPN::RPN(string input): input(input) {}

RPN::~RPN() {}

RPN::RPN(const RPN &copy)
{
    *this = copy;
}

RPN &RPN::operator = (const RPN &copy)
{
    if (this != &copy)
    {
        this->input = copy.input;
        for (int i = 0; this->numbers[i]; i++)
        {
            this->numbers[i] = copy.numbers[i];
        }
    }
    return *this;
}

int RPN::calculator(int number1, int number2, char oprtr)
{
    if (oprtr == '+')
        return number1 + number2;
    if (oprtr == '-')
        return number1 - number2;
    if (oprtr == '/')
        return number1 / number2;
    if (oprtr == '*')
        return number1 * number2;
    else
        return 0;
}

void    RPN::readRPN(void)
{
    int i = 0;
    int n = 0;
    int number_count = 0;
    while (this->input[i])
    {
        if (isdigit(this->input[i]))
        {
            this->numbers[n++] = input[i] - '0';
            number_count++;
        }
        else if (this->input[i] == '+' || this->input[i] == '-' || this->input[i] == '*' || this->input[i] == '/')
        {
            if (number_count == 2)
            {
                this->numbers[0] = this->calculator(this->numbers[0], this->numbers[1], this->input[i]);
                number_count = 1;
            }
            else
            {
                this->numbers[0] = this->calculator(this->numbers[0], this->calculator(this->numbers[1], this->numbers[2], this->input[i]), this->input[i + 2]);
                number_count = 1;
                i += 2;
            }
            this->numbers[1] = 0;
            n = 1;
        }
        else if (isalpha(this->input[i]) || this->input[i] != ' ')
        {
            cout << "Error" << endl;
            return;   
        }
        i++;
    }
    cout << this->numbers[0] << endl;
}

