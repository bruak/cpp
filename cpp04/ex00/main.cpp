#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

int main()
{

    std::cout << "--------------- Animal ---------------" << std::endl;

     Animal* meta = new Animal();
     Animal* j = new Dog();
     Animal* i = new Cat();

    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    i->makeSound();
    //meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;

    std::cout << std::endl << "------------- Wrong Animal -------------" << std::endl;

     WrongAnimal *wrong = new WrongAnimal();
     WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();

    delete  wrong;
    delete  wrongCat;
    
    std::cout << std::endl << "-----------------------------------------------" << std::endl;

    Animal asd("test");

    asd.makeSound();
    asd.getType();
    Dog dogg(dogg);
    dogg.makeSound();
    dogg.getType();
    Cat catt(catt);
    catt.makeSound();
    catt.getType();

    return 0;
}