
#include "ShrubberyCreationForm.hpp"

int main()
{
    AForm form("form", 100, 100);
    Bureaucrat bur(100, "burTest");
    ShrubberyCreationForm test("test");

    bur.signFrom();
    test.execute(bur);
}
