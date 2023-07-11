
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a(15, "test");
    cout << a << endl;

	Form form("file", 20, 3);

	a.signFrom(form);
}
