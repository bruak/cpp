#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->type = "creature(default name)";
    std::cout << this->type << " constructor called" << std::endl;
}

AAnimal::AAnimal(std::string incoming_type)
{
    this->type = incoming_type;
    std::cout << "AAnimal " << this->type << " constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound()
{
    std::cout << "AAnimal makeSound called" << std::endl;
}

std::string AAnimal::getType()
{
    return this->type;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << "AAnimal.cpp:32 copy constructor called" << std::endl;
    *this = copy;
}
