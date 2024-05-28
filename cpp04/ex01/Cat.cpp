#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << this->type <<" constructor called" << std::endl;
    try {
        this->brain = new Brain();
    } catch (std::bad_alloc &e) {
        std::cerr << "Failed to allocate memory for brain: " << e.what() << std::endl;
    }
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << this->type << " destructor called" << std::endl;
}

void   Cat::makeSound()
{
    std::cout << "meaaaw meaawaw mAGGGGGGGGGGAVVVV" << std::endl;
}

Cat::Cat(Cat& src )
{
    *this = src;
}

Cat& Cat::operator=(const Cat& src )
{
    std::cout << "Cat copy called (this will copy to another value)" << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain(*src.brain); // copy the value of the brain
    }
    return *this;
}