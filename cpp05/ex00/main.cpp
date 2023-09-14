
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a(15, "test");
    	cout << a << endl;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}

	try
	{
		Bureaucrat fail(151, "test2");
		cout << fail << endl;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
}
