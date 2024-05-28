#include "Animal.hpp"

Animal::Animal()
{
    this->type = "creature(default name)";
    std::cout << this->type << " constructor called" << std::endl;
}

Animal::Animal(std::string incoming_type)
{
    this->type = incoming_type;
    std::cout << "Animal " << this->type << " constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound()
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string Animal::getType()
{
    return this->type;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
}