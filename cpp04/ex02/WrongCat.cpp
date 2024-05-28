#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << this->wrong_animal_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << this->wrong_animal_type <<" destructor called" << std::endl;
}

void    WrongCat::makeSound()
{
    std::cout << "meaaaw meaawaw mAGGGGGGGGGGAVVVV(wrong car sound)" << std::endl;
}

