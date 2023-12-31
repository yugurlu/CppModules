


#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void)
{
    string s[] = {"A", "B", "C"};

    srand(time(NULL));
    int random = std::rand() % 3;

    if (s[random] == "A")
        return new A;
    if (s[random] == "B")
        return new B;
    if (s[random] == "C")
        return new C;
    return NULL;
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        cout << "Type is A" << endl;
    else if (dynamic_cast<B*>(p))
        cout << "Type is B" << endl;
    else if (dynamic_cast<C*>(p))
        cout << "Type is C" << endl;
}

void    identify(Base &p)
{
    try
    {
        A &castRef = dynamic_cast<A&>(p);
        cout << "Type is A" << endl;
        (void)castRef;
    }
    catch (std::bad_cast &e) {}
    try
    {
        B &castRef = dynamic_cast<B&>(p);
        cout << "Type is B" << endl;
        (void)castRef;
    }
    catch (std::bad_cast &e) {}
    try
    {
        C &castRef = dynamic_cast<C&>(p);
        cout << "Type is C" << endl;
        (void)castRef;
    }
    catch (std::bad_cast &e) {}
}

int main()
{
    Base *p = generate();

    identify(p);
    identify(*p);

    delete p;
}