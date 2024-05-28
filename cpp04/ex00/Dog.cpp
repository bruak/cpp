#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << this->type <<"  constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->type <<"  constructor called" << std::endl;
}

void    Dog::makeSound()
{
    std::cout << "HAWWWĞĞWĞĞWĞWW HAWWAĞAWĞAĞWĞWĞĞWĞWĞ HWHWAWHHAWHWAHWAHWAH" << std::endl;
}