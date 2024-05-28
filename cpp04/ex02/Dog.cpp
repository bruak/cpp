#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << this->type <<" constructor called" << std::endl;
    try {
        this->brain = new Brain();
    }
    catch (std::bad_alloc &e)
    {
        std::cerr << "Dog bad_alloc caught: " << e.what() << std::endl;
    }
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << this->type <<" destructor called" << std::endl;
}

void    Dog::makeSound()
{
    std::cout << "HAWWWĞĞWĞĞWĞWW HAWWAĞAWĞAĞWĞWĞĞWĞWĞ HWHWAWHHAWHWAHWAHWAH" << std::endl;
}

Dog::Dog(Dog& src )
{
    *this = src;
}

//overload the operator= to copy the value of the object
Dog& Dog::operator=(const Dog& src )
{
    std::cout << "Dog copy called (this will copy to another value)" << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain(*src.brain); // copy the value of the brain
    }
    return *this;
}
