#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include <iostream>

class WrongAnimal 
{
protected:
    std::string wrong_animal_type;
public:
    WrongAnimal();
    WrongAnimal(std::string wrong_animal_type);
    ~WrongAnimal();

    void makeSound();
    std::string getType();
};

#endif