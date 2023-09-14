
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a(21, "test");
        cout << a << endl;

	    Form form("file", 20, 3);
	    a.signFrom(form);
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }


}
