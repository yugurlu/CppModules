
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    cout << j->getType() << " " << endl;
    cout << i->getType() << " " << endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    const WrongAnimal* test = new WrongAnimal();
    const WrongAnimal* test2 = new WrongCat();

    cout << test2->getType() << " " << endl;

    test->makeSound();
    test2->makeSound();

    delete test;
    delete test2;


    return 0;
}
