#include <string.h>
#include <iostream>

int main(){

    std::string zombie = "HI THIS IS BRAIN";

    std::string *stringPTR = &zombie;
    std::string &stringREF = zombie;

    std::cout << "Adress of string of zombie: " << stringPTR << std::endl;
    std::cout << "Adress of string of zombie: " << &stringREF << std::endl;

    std::cout << "String of zombie, PTR value: " << *stringPTR << std::endl;
    std::cout << "String of zombie, REF value: " << stringREF << std::endl;

return (0);
}


/*
referaslar ve pointerlar
referanslar ve pointerlar arasındaki farklar

referans değerleri takma isim gibi kullanılır bu şekilde kullanım kolaylığı sağlar.
referanslar bir kere tanımlandıktan sonra başka bir değere eşitlenemez.
NULL olamaz
değişken gibi yazılabildiği için dereference işlemi yapmaya gerek yoktur. (ptr).
referans değerinin kendi adresi yoktur.


pointerlar ise bir işaretçi gibi kullanılır ve bir işaretçi gibi davranır.
pointerlar bir kere tanımlandıktan sonra başka bir değere eşitlenebilir.
NULL olabilir
değişken gibi yazılamaz ve dereference işlemi yapılması gerekmektedir. (*ptr).
pointer değerinin kendi adresi vardır.

*/