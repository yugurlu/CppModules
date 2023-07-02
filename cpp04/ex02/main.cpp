
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "AAnimal.hpp"

int main()
{
    //const AAnimal *test = new AAnimal(); ERROR

    const AAnimal *test = new Dog();
    const AAnimal *test2 = new Cat();

    test = test2;

    cout << test->getType() << endl;
    cout << test2->getType() << endl;

    cout << test << endl;
    cout << test2 << endl;

    delete test2;

    //system("leaks Animals");

    return 0;
}