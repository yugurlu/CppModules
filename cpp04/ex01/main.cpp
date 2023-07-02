
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "Animal.hpp"

int main()
{
    const Animal *animals[4];
    
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    for (int i = 0; i < 4; i++)
        cout << animals[i]->getType() << endl;

    for (int i = 0; i < 4; i++)
        delete animals[i];
    
    //system("leaks Animals");

    return 0;
}
