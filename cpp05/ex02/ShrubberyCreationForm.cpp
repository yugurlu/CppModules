
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const string &target) : AForm("Shrubbery", 145, 137) , target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

int ShrubberyCreationForm::executer_control(const Bureaucrat &executor)
{
    try
    {
        if (this->getSign() == false)
            throw "Form is not signed";
        else if (executor.getGrade() > this->getExecGrade())
            throw GradeTooHighException();
    }
    catch (std::exception &e)
    {
        cout << "exception fail" << endl;
        return 0;
    }
    return 1;
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executor)
{
    if (executer_control(executor))
    {
        ofstream file(this->target + "_shrubbery");

        file << "              ,@@@@@@@," << endl;
        file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << endl;
        file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << endl;
        file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << endl;
        file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << endl;
        file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << endl;
        file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << endl;
        file << "       |o|        | |         | |" << endl;
        file << "       |.|        | |         | |" << endl;
        file << "jgs \\\\/ .\\_\\/\\_/__/  ,\\_//__\\\\/.  \\_//__/" << endl;
    }
}