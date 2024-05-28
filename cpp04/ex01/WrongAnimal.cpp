#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->wrong_animal_type = "WrongAnimal (default name)";
    std::cout << this->wrong_animal_type << " WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string incoming_type)
{
    this->wrong_animal_type = incoming_type;
    std::cout << this->wrong_animal_type << " WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal makeSound sound called" << std::endl;
}

std::string WrongAnimal::getType()
{
    return this->wrong_animal_type;
}
