
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const string &target) : AForm(target, 145, 137) , target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &copy)
{
    (void)copy;
    return *this;
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (this->executer_control(executor))
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
        file << "\\\\/ .\\_\\/\\_/__/  ,\\_//__\\\\/.  \\_//__/" << endl;

        file.close();
    }
    
}