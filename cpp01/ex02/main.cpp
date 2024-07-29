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
