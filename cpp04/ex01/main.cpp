#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

void test1() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; // should not create a leak
    delete i;
}

void test2() {
    Dog basic;
    {
        Dog tmp = basic;
    }
}

void test3() {
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }
}

void test4() {
    Dog* dogArray = new Dog[5];
    delete[] dogArray; // Correct usage for arrays
}

void test5() {
    Animal* animalArray[3];
    animalArray[0] = new Dog();
    animalArray[1] = new Cat();
    animalArray[2] = new Dog();

    for (int i = 0; i < 3; ++i) {
        delete animalArray[i];
    }
}

void test6() {
    Animal* dynamicAnimal = new Dog();
    dynamicAnimal->makeSound();
    delete dynamicAnimal;
}

void test7() {
    Dog* dog = new Dog();
    Animal* animalRef = dog;

    delete animalRef; // This should call the correct destructor due to virtual destructors
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();


    return 0;
}

// yapılan testler üzerinde her testin açıklaması ve 
// etkili olduğu fonksiyonlar ve sınıflar açıklanacak.
// !!! özellikle kullanılan yöntemler ve pdf üzeindeki açıklanılmasını şs
//istenilen yerler