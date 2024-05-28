#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << this->type <<" constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << this->type << " destructor called" << std::endl;
}

void   Cat::makeSound()
{
    std::cout << "meaaaw meaawaw mAGGGGGGGGGGAVVVV" << std::endl;
}

